#include<bits/stdc++.h>
using namespace std;
struct phanso{
    int tu,mau;
};
void nhap(phanso &x){
    cin>>x.tu>>x.mau;
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
int bcnn(int a,int b){
    return a*b/ucln(a,b);
}
phanso tong (phanso x,phanso y){
    int z=bcnn(x.mau,y.mau);
    x.tu=z/x.mau*x.tu;
    y.tu=z/y.mau*y.tu;
    x.tu+=y.tu;
    x.mau=z;
    return x;
}
void rutgon(phanso &x){
    int z=ucln(x.tu,x.mau);
    x.tu/=z;
    x.mau/=z;


}
void in(phanso x){
    rutgon(x);
    cout<<x.tu<<"/"<<x.mau;
}

int main(){
    struct phanso p,q;
    nhap(p);nhap(q);
    phanso t=tong(p,q);
    in(t);

    return 0;

}
