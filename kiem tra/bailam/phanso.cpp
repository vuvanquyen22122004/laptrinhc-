#include<bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
    if(a==0||b==0) return a+b;
    while(b){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}
int bcnn(int a,int b){
    return a/ucln(a,b)*b;
}
struct phanso{
    int tu,mau;

};
void nhap(phanso &p){
    cin>>p.tu>>p.mau;

}
void in(phanso &p){
    cout<<p.tu<<"/"<<p.mau;
}
phanso rutgon(phanso &x){
    int y=ucln(x.tu,x.mau);
    x.tu/=y;
    x.mau/=y;
    return x;
}

phanso tong(phanso &a,phanso &b){
    int x=bcnn(a.mau,b.mau);
    a.tu=(x/a.mau)*a.tu;
    b.tu=(x/b.mau)*b.tu;
    a.tu+=b.tu;
    a.mau=x;
    rutgon(a);
    return a;

}


int main(){
    struct phanso p,q;
    nhap(p);
    nhap(q);
    phanso t=tong(p,q);
    in(t);
    return 0;
}
