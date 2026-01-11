#include<bits/stdc++.h>
using namespace std;
long long usc(long long a,long long b){
    if(a==0||b==0){
       return a+b;
    }
    while(b){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}
long long  bsc(long long  a ,long long  b){
    return a*b/usc(a,b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        cout<<bsc(a,b)<<" "<<usc(a,b)<<endl;
    }
}
