#include<bits/stdc++.h>
using namespace std;
long long usc(long long a,long long b){
    if(a==0||b==0) return a+b;
    while(b){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}
long long bcn(long long a,long long b){
    return a/usc(a,b)*b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,z,n;
        cin>>x>>y>>z>>n;
        long long tmp=bcn(bcn(x,y),z);

        long long a=1ll*pow(10,n-1);
        long long b=1ll*pow(10,n)-1;
     long long h=a+tmp-1;
     long long j=h/tmp;
     long long res=1ll*j*tmp;
  if(res<=b){
    cout<<res<<endl;
  }
  else cout<<"-1"<<endl;

    }
}
