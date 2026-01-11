#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a==0||b==0) return a+b;
    while(b){


        long  x=a%b;
        a=b;
        b=x;

}
return a;
}
long long bcn(long long a,long long b){
    return a/gcd(a,b)*b;
}
struct PhanSo{
    long long tu,mau;
};
void nhap(PhanSo &a){
    cin>>a.tu>>a.mau;
}
PhanSo tong(PhanSo &a,PhanSo &b){
    long long tmp=bcn(a.mau,b.mau);
    a.tu=(tmp/a.mau)*a.tu;
    b.tu=(tmp/b.mau)*b.tu;
    a.tu+=b.tu;
    a.mau=tmp;

    return a;


}
void in(PhanSo &a){
    cout<<a.tu<<"/"<<a.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
