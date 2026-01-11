#include<bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
    while(b){

        int x=b%a;
        a=b;
        b=x;

    }
    return a;

}
int bcln(int a,int b){
    return a*b/ucln(a,b);
}
struct phanso{
    int tu,mau;
};
    void nhap(phanso x){
        cin>>x.tu>>x.mau;
    }
    void in(phanso x){
        cout<<x.tu<<"/"<<x.mau;
    }
    void rutgon(phanso &x){
       x.tu/=ucln(x.tu,x.mau);
       x.mau=ucln(x.tu,x.mau);

    }

int main(){
    struct phanso p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;

}


