#include<bits/stdc++.h>
using namespace std;

int check(long long n){
    long long a[100];

    a[0]=0;
    a[1]=1;
    for(int i=2;i<=100;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=2;i<=100;i++){
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
        if(check(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }
}
