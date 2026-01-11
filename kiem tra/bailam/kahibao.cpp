#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string ten,lop,ns;
    string msv="B20DCCN001";
    float gpa;
   friend istream &operator(istream &in,SinhVien &a){
       in>>a.ten>>a.lop>>a.ns>>a.
   }

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
