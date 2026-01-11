#include<bits/stdc++.h>
using namespace std;
struct sophuc{
    int a,b;
     friend bool operator==(const sophuc x,const sophuc y){
        return x.a==y.a&&x.b==y.b;
    }

};

 void nhap(sophuc &x){
        cin>>x.a>>x.b;

    }
    void in(sophuc x){
        cout<<x.a<<x.b;
    }

    int main(){
    sophuc v,n;
    nhap(v);
    nhap(n);
    if(v==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
