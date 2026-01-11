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
long long lcm(long long a,long long b){
    return a/gcd(a,b)*b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x=1;

        for(long long i=1;i<=n;i++){
            x=lcm(x,i);
        }
        cout<<x;
        cout<<endl;
    }
}
