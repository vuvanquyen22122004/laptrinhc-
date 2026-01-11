#include<bits/stdc++.h>
using namespace std;
map<long long ,int>mp;

void check(){
    int a[93];
        a[0]=0;
     a[1]=1;

    for(int i=2;i<=92;i++){
            a[i]=a[i]+a[i-1];

    }
    for(int i=0;i<=92;i++){
        mp[a[i]]=1;
    }

}
int main(){
    int t;
    cin>>t;
    check();
    while(t--){
        int n;
        cin>>n;
        int b[n];


        for(int i=0;i<n;i++){
            cin>>b[i];


        }
        for(int i=0;i<n;i++){
            if(mp[b[i]]==1) cout<<b[i]<<" ";
        }

    }
}
