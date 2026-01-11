#include<bits/stdc++.h>
using namespace std;

long long check(long long n){
    long long a[100];

    a[0]=0;
    a[1]=1;
    for(int i=2;i<=92;i++){
        a[i]=a[i-2]+a[i-1];
    }
    for(int i=0;i<=92;i++){
        if(n==a[i]) return 1;

    }
    return 0;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<0) return 0;
        if(check(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
}
