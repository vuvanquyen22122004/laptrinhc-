#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a==0||b==0) return a+b;
    while(b){
        long long x=a%b;
        a=b;
        b=x;

    }
    return a;
}
struct PhanSo{
    long long tu,mau;

};
void nhap(PhanSo &a){
    cin>>a.tu>>a.mau;
}
void rutgon(PhanSo &a){
    long long x=a.tu;
     a.tu/=gcd(a.tu,a.mau);
    a.mau/=gcd(x,a.mau);
}
void in(PhanSo a){

    cout<<a.tu<<"/"<<a.mau;

}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
