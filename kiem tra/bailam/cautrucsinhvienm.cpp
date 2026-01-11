#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string msv,ten,gt,ns,diachi,mst,ngay;

};
void nhap(NhanVien &a){
    getline(cin,a.ten);
    getline(cin,a.gt);
    getline(cin,a.ns);
    getline(cin,a.diachi);
    getline(cin,a.mst);
    getline(cin,a.ngay);
}
void in(NhanVien a){
    a.msv="00001";
    cout<<a.msv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.diachi<<" "<<a.mst<<" "<<a.ngay;

}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
