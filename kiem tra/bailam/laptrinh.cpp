#include<bits/stdc++.h>
using namespace std;
struct sophuc {
    int a,b;
    friend istream &operator>>(istream &in,sophuc &x){
        in>>x.a>>x.b;
    }
    friend bool operator ==(sophuc x,sophuc y){
        return x.a==y.a && x.b==y.b;
    }
    friend ostream &operator <<(ostream &out,sophuc &x){
        out<<x.a<<" "<<x.b;
    }

};
int main(){
    sophuc x,y;
    cin>>x>>y;


   if(x==y) cout<<"YES";
   else cout<<"NO";
}
