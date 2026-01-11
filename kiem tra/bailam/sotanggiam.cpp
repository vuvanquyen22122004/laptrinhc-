#include<bits/stdc++.h>
using namespace std;
int tang(long long n){
    while(n>=10){
        int x=n%10;
        int y=(n/10)%10;
        if(x<=y) return 0;
        n/=10;

    }
    return 1;
}
int giam(long long n){
    while(n>=10){
        int x=n%10;
        int y=(n/10)%10;
        if(x>=y) return 0;
        n/=10;
    }
    return 1;
}
int nt(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
}
return n>1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        long long x=pow(10,n-1);
        long long y=pow(10,n)-1;
        for( long long i=x;i<=y;i++){
            if(nt(i)&&giam(i)||(nt(i)&&tang(i))) cnt++;
        }
        cout<<cnt<<endl;

    }
}
