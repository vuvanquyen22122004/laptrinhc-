#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Nhap cac so (Ctrl+Z hoac Ctrl+D de dung): ";
    while (cin >> x) { // Kiểm tra trạng thái của cin
        cout << "Ban vua nhap: " << x << endl;
    }
    cout << "Ket thuc nhap." << endl;
    return 0;
}
