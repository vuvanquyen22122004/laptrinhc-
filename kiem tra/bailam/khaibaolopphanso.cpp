#include<bits/stdc++.h>

using namespace std;
class phanso{
private:
    int tu,mau;
public:
    phanso(int tu,int mau);
    friend istream& operator >>(istream &in,phanso &x);
    friend ostream& operator<<(ostream &out,phanso x);
     void rutgon();


};
istream& operator >>(istream &in,phanso &x){
    in>>x.tu>>x.mau;
    return in;
}

ostream& operator<<(ostream &out,phanso x){
    out<<x.tu<<"/"<<x.mau;
    return out;
}

int ucln(int a,int b){
    if(a==0||b==0) return a+b;
    while(b){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}
int gcd(int a,int b){
    return a*b/ucln(a,b);
}
void phanso::rutgon(){
    int y=ucln(tu,mau);
    tu/=y;
    mau/=y;

}
phanso::phanso(int tu,int mau){
    this->tu=tu;
    this->mau=mau;
}
int main(){
    phanso p(2,2);
    cin>>p;
    p.rutgon();
    cout<<p;
    return 0;
}
