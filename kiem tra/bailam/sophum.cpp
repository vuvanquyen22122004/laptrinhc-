#include<bits/stdc++.h>
using namespace std;
struct sophuc{
    int tu,mau;
    friend istream& operator>>(istream &in,sophuc &x){
        in>>x.tu>>x.mau;
        return in;
    }
    friend ostream& operator<<(ostream &out,sophuc x){
        out<<x.tu<<x.mau;
        return out;
    }
    friend bool operator==(const sophuc x,const sophuc y){
        if(x.tu==y.tu&&x.mau==y.mau) return true;
        return false;
    }
};
int main(){
    sophuc a,b;
    cin>>a>>b;
    if(a==b) cout<<"YES";
    else cout<<"NO";

}
