#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    int a[93];
    a[0]=0;a[1]=1;
    for(int i=2;i<=92;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<=92;i++){
        if(a[i]==n) {cout<<n<<" ";
        break;
    }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            fibo(a[i]);
        }
        cout<<endl;
    }
}
