#include<bits/stdc++.h>
using namespace std;
struct sophuc{
    int a,b;
    friend sophuc operator +(const sophuc x,sophuc y){
        sophuc tong;
        tong.a=x.a+y.a;
        tong.b=x.b+y.b;
        return tong;

    }
    friend istream &operator >>( istream &in,sophuc &x){
        in>>x.a>>x.b;
        return in;
    }
    friend ostream &operator <<(ostream &out,sophuc x){
        out<<x.a<<" "<<x.b;
    }
};
int main(){
    sophuc a;
    sophuc b;
    cin>>a>>b;
    sophuc c=a+b;
    cout<<c.a<<" "<<c.b<<endl;
}
