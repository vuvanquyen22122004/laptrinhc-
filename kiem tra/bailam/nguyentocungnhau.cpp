#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a==0||b==0) return a+b;
    while(b){
        long long x=a%b;
         a=b;
        b=x;
    }
    return a;

}
long long phi(long long n){
    long long res=n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            res-=res/i;
        }
    }
    if(n!=1){
        res-=res/n;
    }
    return res;
}
int main(){
   long long a;
   cin>>a;
   cout<<phi(a)<<endl;
}
