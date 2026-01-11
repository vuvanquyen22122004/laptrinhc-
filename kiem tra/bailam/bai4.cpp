#include<bits/stdc++.h>
using namespace std;
long long  ucln(long long a, long long b){
    while(b){
        long long r=a%b;a=b;
        b=r;

    }
    return a;
}
class PhanSo{
private:
    long long tu,mau;
public:
    Phanso(long long m=1,long long n=1){
        tu=m;
        mau=n;
    }

};
void Rutgon(){
    int gcd=ucln(tu,mau);
    tu/=gcd;
    mau/=gcd;
}
friend istream&operator >>(istream&in)
PhanSo&p{
    cin>>p.tu>>p.mau;
    return in;
}
friend ostream&operator<<(ostream&out,PhanSo p){
    p.Rutgon();
}
int main(){
    PhanSo p(1,1),q(1,1);
    cin>>p>>q;
    cout<<p+q;
    return 0;
}
