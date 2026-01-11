#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long t,m;
};
void nhap(PhanSo &a){
    cin>>a.t>>a.m;
}
long long gcd(PhanSo a){
    if(a.t==0||a.m==0) return a.t+a.m;
    while(a.m){
        long long x=a.t%a.m;
        a.t=a.m;
        a.m=x;
    }
    return a.t;
}
void rutgon(PhanSo &a){
    long long x=gcd(a);
    a.t/=x;
    a.m/=x;

}
void in(PhanSo &a){
    cout<<a.t<<"/"<<a.m;

}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
