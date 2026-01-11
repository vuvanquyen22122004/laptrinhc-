#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    long long fibo[92];
    fibo[1]=fibo[2]=1;
    for(int i=3;i<=92;i++){
        fibo[i]=fibo[i-2]+fibo[i-1];
    }
    cout<<fibo[n]<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        fibo(n);NN

    }
}

