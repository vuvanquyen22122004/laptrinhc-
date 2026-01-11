#include<bits/stdc++.h>
using namespace std;
long long chinhphuong(long long n){
    long long x=sqrt(n);
    if(x*x==n) return 1;
    else return 0;
}

int main(){
    long long n;
    cin>>n;
    for(long long i=2; ;i++){
        if(chinhphuong(n*i)){
            cout<<n*i;
          break;
        }
    }
    return 0;
}
