#include<bits/stdc++.h>
using namespace std;

long long check(long long n){
    long long fibo[93];
    fibo[0]=0;
    fibo[1]=1;

    for(int i=2;i<=92;i++){
        fibo[i]=fibo[i-2]+fibo[i-1];
    }
    for(int i=0;i<=92;i++){
        if(fibo[i]==n) return 1;
    }
    return 0;


}
int main(){

    int t;
    cin>>t;

    while(t--){
        long long a;
        cin>>a;
         if(check(a)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }
}
