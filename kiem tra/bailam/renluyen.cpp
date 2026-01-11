#include<bits/stdc++.h>
using namespace std;
struct sophuc{
    int a,b;
    friend sophuc operator +(const sophuc x,const sophuc y){

        sophuc tong ;
        tong.a=x.a+y.a;
        tong.b=x.b+y.b;
        return tong;
    }
    friend istream&operator>>(istream &in,sophuc &x){
        in>>x.a>>x.b;
        return in;
        }
    friend ostream &operator<<(ostream &out,sophuc x){
        out<<x.a<<x.b;
    }
    friend bool operator==(const sophuc x,const sophuc y){
        return x.a==y.a&&x.b==y.b;
    }


};
int main(){
    sophuc a,b;
    cin>>a>>b;
    if(a==b) cout<<"YES";
    else cout<<"NO";
}
