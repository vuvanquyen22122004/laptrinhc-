#include<bits/stdc++.h>
using namespace std;
int n,ok,a[100];
void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1&&a[i]!=0){
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]=1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
            cin>>n;
            ok=1;
            khoitao();
    while(ok){
            for(int i=1;i<=n;i++){
                    if(a[i]==0) cout<<"A";
            else cout<<"B";

            }
            cout<<" ";
            sinh();
    }
    cout<<endl;

    }
}
