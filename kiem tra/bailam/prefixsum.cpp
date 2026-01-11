#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){


    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int prefix[n+1]={0};
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    int sum=INT_MIN;
    for(int i=1;i<=n;i++){
        sum=max(sum,prefix[i]);
    }
   cout<<sum<<endl;




}
}
