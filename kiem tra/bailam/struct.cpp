#include<bits/stdc++.h>
using namespace std;
struct sophuc{
    int a,b;
    friend sophuc operator +(const sophuc x,sophuc y){
        sophuc tong ;
        tong.a=x.a+y.a;
        tong.b=x.b+y.b;
        return tong;
    }
    friend istream &operator>>(istream &in,sophuc &x){
        in>>x.a>>x.b;
        return in;
    }
    friend bool operator ==(sophuc x,sophuc y){
        return x.a==y.a&&x.b==y.b;
    }


    friend ostream &operator <<(ostream &out, sophuc x){
       out<<x.a<<" "<<x.b;
       return out;
    }

};
int main(){
  sophuc x,y;
  cin>>x>>y;
  if(x==y) cout<<"yes";
  else cout<<"no";
  return 0;



}
