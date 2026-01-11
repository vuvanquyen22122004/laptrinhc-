#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string msv,ten,gt,ns,diachi,sdt,ngay;

};
void nhap(NhanVien &a){
    a.msv="00001";
    getline(cin,a.ten);
    getline(cin,a.gt);
    getline(cin,a.ns);
    getline(cin,a.diachi);
    getline(cin,a.sdt);
    getline(cin,a.ngay);
    if(a.ns[1]=='/') a.ns.insert(0,"0");
    if(a.ns[4]=='/') a.ns.insert(3,"0");
    if(a.ngay[0]=='/') a.ngay.insert(0,"0");
    if(a.ngay[4]=='/') a.ngay.insert(3,"0");
}
void in(NhanVien &a){
    cout<<a.msv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.diachi<<" "<<a.sdt<<" "<<a.ngay;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
