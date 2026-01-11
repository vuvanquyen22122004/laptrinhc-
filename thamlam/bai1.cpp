#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <algorithm>
#include <limits>

// Định nghĩa cấu trúc Diem để biểu diễn tọa độ 2D
struct Diem {
    double x, y;
    Diem(double _x = 0, double _y = 0) : x(_x), y(_y) {}
};

// Định nghĩa cấu trúc Nut để biểu diễn node trong cây RRT*
struct Nut {
    Diem vi_tri; // Vị trí của node
    int cha; // Chỉ số của node cha
    double chi_phi; // Chi phí từ gốc đến node
    Nut(Diem _vi_tri, int _cha = -1, double _chi_phi = 0)
        : vi_tri(_vi_tri), cha(_cha), chi_phi(_chi_phi) {}
};

// Định nghĩa cấu trúc ChuongNgaiVat để biểu diễn hình chữ nhật
struct ChuongNgaiVat {
    Diem goc_trai_duoi, goc_phai_tren;
    ChuongNgaiVat(Diem bl, Diem tr) : goc_trai_duoi(bl), goc_phai_tren(tr) {}
};

// Lớp RRTStar
class RRTStar {
private:
    Diem diem_bat_dau, diem_dich; // Điểm bắt đầu và đích
    std::vector<ChuongNgaiVat> danh_sach_chuong_ngai; // Danh sách chướng ngại vật
    std::vector<Nut> danh_sach_nut; // Danh sách các node trong cây
    double buoc_nhay; // Khoảng cách tối đa khi mở rộng node
    double ban_kinh_dich; // Bán kính vùng đích
    double ban_kinh_tim_lang_gieng; // Bán kính tìm láng giềng
    int so_lan_lap_toi_da; // Số lần lặp tối đa
    std::mt19937 rng; // Bộ tạo số ngẫu nhiên

    // Tính khoảng cách Euclidean
    double khoang_cach(const Diem& diem1, const Diem& diem2) {
        return std::sqrt(std::pow(diem2.x - diem1.x, 2) + std::pow(diem2.y - diem1.y, 2));
    }

    // Tạo điểm ngẫu nhiên trong không gian
    Diem lay_mau_ngau_nhien() {
        std::uniform_real_distribution<double> dist_x(0, 100); // Không gian 100x100
        std::uniform_real_distribution<double> dist_y(0, 100);
        return Diem(dist_x(rng), dist_y(rng));
    }

    // Tìm node gần nhất
    int tim_nut_gan_nhat(const Diem& diem) {
        int chi_so_gan_nhat = 0;
        double khoang_cach_nho_nhat = std::numeric_limits<double>::max();
        for (size_t i = 0; i < danh_sach_nut.size(); ++i) {
            double kc = khoang_cach(danh_sach_nut[i].vi_tri, diem);
            if (kc < khoang_cach_nho_nhat) {
                khoang_cach_nho_nhat = kc;
                chi_so_gan_nhat = i;
            }
        }
        return chi_so_gan_nhat;
    }

    // Tạo điểm mới từ node gần nhất theo hướng điểm ngẫu nhiên
    Diem tao_diem_moi(const Diem& nut_gan_nhat, const Diem& diem_ngau_nhien) {
        double kc = khoang_cach(nut_gan_nhat, diem_ngau_nhien);
        if (kc <= buoc_nhay) return diem_ngau_nhien;
        double goc = std::atan2(diem_ngau_nhien.y - nut_gan_nhat.y, diem_ngau_nhien.x - nut_gan_nhat.x);
        return Diem(nut_gan_nhat.x + buoc_nhay * std::cos(goc),
                    nut_gan_nhat.y + buoc_nhay * std::sin(goc));
    }

    // Kiểm tra va chạm với chướng ngại vật
    bool khong_va_cham(const Diem& diem1, const Diem& diem2) {
        for (const auto& cn : danh_sach_chuong_ngai) {
            double min_x = std::min(diem1.x, diem2.x);
            double max_x = std::max(diem1.x, diem2.x);
            double min_y = std::min(diem1.y, diem2.y);
            double max_y = std::max(diem1.y, diem2.y);
            if (max_x >= cn.goc_trai_duoi.x && min_x <= cn.goc_phai_tren.x &&
                max_y >= cn.goc_trai_duoi.y && min_y <= cn.goc_phai_tren.y) {
                return false; // Có va chạm
            }
        }
        return true; // Không va chạm
    }

    // Tìm các node láng giềng trong bán kính tìm kiếm
    std::vector<int> tim_lang_gieng(const Diem& diem) {
        std::vector<int> lang_gieng;
        for (size_t i = 0; i < danh_sach_nut.size(); ++i) {
            if (khoang_cach(danh_sach_nut[i].vi_tri, diem) <= ban_kinh_tim_lang_gieng) {
                lang_gieng.push_back(i);
            }
        }
        return lang_gieng;
    }

    // Chọn node cha tối ưu
    int chon_cha_toi_uu(const std::vector<int>& lang_gieng, int nut_gan_nhat, const Diem& diem_moi) {
        int cha_tot_nhat = nut_gan_nhat;
        double chi_phi_nho_nhat = danh_sach_nut[nut_gan_nhat].chi_phi +
                                  khoang_cach(danh_sach_nut[nut_gan_nhat].vi_tri, diem_moi);

        for (int chi_so : lang_gieng) {
            double chi_phi = danh_sach_nut[chi_so].chi_phi +
                             khoang_cach(danh_sach_nut[chi_so].vi_tri, diem_moi);
            if (chi_phi < chi_phi_nho_nhat && khong_va_cham(danh_sach_nut[chi_so].vi_tri, diem_moi)) {
                chi_phi_nho_nhat = chi_phi;
                cha_tot_nhat = chi_so;
            }
        }
        return cha_tot_nhat;
    }

    // Tái cấu trúc cây
    void tai_cau_truc_cay(const std::vector<int>& lang_gieng, int chi_so_nut_moi) {
        for (int chi_so : lang_gieng) {
            double chi_phi_moi = danh_sach_nut[chi_so_nut_moi].chi_phi +
                                 khoang_cach(danh_sach_nut[chi_so_nut_moi].vi_tri, danh_sach_nut[chi_so].vi_tri);
            if (chi_phi_moi < danh_sach_nut[chi_so].chi_phi &&
                khong_va_cham(danh_sach_nut[chi_so_nut_moi].vi_tri, danh_sach_nut[chi_so].vi_tri)) {
                danh_sach_nut[chi_so].cha = chi_so_nut_moi;
                danh_sach_nut[chi_so].chi_phi = chi_phi_moi;
            }
        }
    }

public:
    RRTStar(Diem _diem_bat_dau, Diem _diem_dich, std::vector<ChuongNgaiVat> _danh_sach_chuong_ngai,
            double _buoc_nhay = 5.0, double _ban_kinh_dich = 2.0,
            double _ban_kinh_tim_lang_gieng = 10.0, int _so_lan_lap_toi_da = 1000)
        : diem_bat_dau(_diem_bat_dau), diem_dich(_diem_dich),
          danh_sach_chuong_ngai(_danh_sach_chuong_ngai),
          buoc_nhay(_buoc_nhay), ban_kinh_dich(_ban_kinh_dich),
          ban_kinh_tim_lang_gieng(_ban_kinh_tim_lang_gieng),
          so_lan_lap_toi_da(_so_lan_lap_toi_da),
          rng(std::random_device{}()) {
        danh_sach_nut.emplace_back(diem_bat_dau, -1, 0); // Thêm node gốc
    }

    // Chạy thuật toán RRT*
    std::vector<Diem> lap_ke_hoach() {
        for (int i = 0; i < so_lan_lap_toi_da; ++i) {
            // Lấy mẫu ngẫu nhiên
            Diem diem_ngau_nhien = lay_mau_ngau_nhien();

            // Tìm node gần nhất
            int chi_so_gan_nhat = tim_nut_gan_nhat(diem_ngau_nhien);

            // Tạo điểm mới
            Diem diem_moi = tao_diem_moi(danh_sach_nut[chi_so_gan_nhat].vi_tri, diem_ngau_nhien);

            // Kiểm tra va chạm
            if (khong_va_cham(danh_sach_nut[chi_so_gan_nhat].vi_tri, diem_moi)) {
                // Tìm các node láng giềng
                std::vector<int> lang_gieng = tim_lang_gieng(diem_moi);

                // Chọn cha tối ưu
                int chi_so_cha = chon_cha_toi_uu(lang_gieng, chi_so_gan_nhat, diem_moi);

                // Thêm node mới vào cây
                double chi_phi_moi = danh_sach_nut[chi_so_cha].chi_phi +
                                     khoang_cach(danh_sach_nut[chi_so_cha].vi_tri, diem_moi);
                danh_sach_nut.emplace_back(diem_moi, chi_so_cha, chi_phi_moi);
                int chi_so_nut_moi = danh_sach_nut.size() - 1;

                // Tái cấu trúc cây
                tai_cau_truc_cay(lang_gieng, chi_so_nut_moi);

                // Kiểm tra nếu node mới gần đích
                if (khoang_cach(diem_moi, diem_dich) <= ban_kinh_dich &&
                    khong_va_cham(diem_moi, diem_dich)) {
                    danh_sach_nut.emplace_back(diem_dich, chi_so_nut_moi,
                                              chi_phi_moi + khoang_cach(diem_moi, diem_dich));
                    return trich_xuat_duong_di(danh_sach_nut.size() - 1);
                }
            }
        }
        return {}; // Không tìm thấy đường đi
    }

    // Trích xuất đường đi từ đích về gốc
    std::vector<Diem> trich_xuat_duong_di(int chi_so_dich) {
        std::vector<Diem> duong_di;
        int chi_so = chi_so_dich;
        while (chi_so != -1) {
            duong_di.push_back(danh_sach_nut[chi_so].vi_tri);
            chi_so = danh_sach_nut[chi_so].cha;
        }
        std::reverse(duong_di.begin(), duong_di.end());
        return duong_di;
    }
};

// Hàm main để thử nghiệm
int main() {
    // Khởi tạo điểm bắt đầu và đích
    Diem diem_bat_dau(0, 0);
    Diem diem_dich(90, 90);

    // Khởi tạo chướng ngại vật
    std::vector<ChuongNgaiVat> danh_sach_chuong_ngai = {
        ChuongNgaiVat(Diem(40, 20), Diem(60, 80)) // Hình chữ nhật
    };

    // Khởi tạo RRT*
    RRTStar rrt_star(diem_bat_dau, diem_dich, danh_sach_chuong_ngai);

    // Chạy thuật toán
    std::vector<Diem> duong_di = rrt_star.lap_ke_hoach();

    // In đường đi
    if (duong_di.empty()) {
        std::cout << "Không tìm thấy đường đi!" << std::endl;
    } else {
        std::cout << "Đường đi tìm được:" << std::endl;
        for (const auto& diem : duong_di) {
            std::cout << "(" << diem.x << ", " << diem.y << ")" << std::endl;
        }
    }

    return 0;
}
