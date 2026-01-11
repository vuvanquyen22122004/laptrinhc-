#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
    string ten,lop,ns;
    float gpa;
};
void nhap(sinhvien &x){
    getline(cin,x.ten);
    getline(cin,x.lop);
    getline(cin,x.ns);
    cin>>x.gpa;
}
void in(sinhvien x){
    if(x.ns[1]=='/') x.ns.insert(0,"0");
    if(x.ns[4]=='/') x.ns.insert(3,"0");
    cout<<"B20DCCN001"<<" "<<x.ten<<" "<<x.lop<<" "<<x.ns<<" "<<fixed<<setprecision(2)<<x.gpa;
}
int main(){
    sinhvien a;
    nhap(a);
    in(a);
    return 0;
}
