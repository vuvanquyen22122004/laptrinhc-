#include<bits/stdc++.h>
using namespace std;
struct sophuc{
    int a,b;
    friend istream &operator>>(istream& in,sophuc &x){
        in>>x.a>>x.b;
        return in;
    }
    friend ostream&operator<<(ostream &out,sophuc x){
        out<<x.a<<x.b;
        return out;
    }
    friend sophuc operator+(sophuc x,sophuc y){
        sophuc tong;
        tong.a=x.a+y.a;
        tong.b=x.b+y.b;
        return tong;
    }
    friend bool operator <(sophuc x,sophuc y){
 return (pow(x.a,2)+pow(x.b,2))< (pow(y.a,2)+pow(y.b,2));


};
int main(){
    sophuc a,b;
    cin>>a>>b;
   if(a<b) cout<<"yes";
   else cout<<"NO";
   return 0;
}
