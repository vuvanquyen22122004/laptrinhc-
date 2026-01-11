#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,s;
    cin>>n>>s;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=0;
    int ans=0;
    int sum=0;
    for(int r=0;r<n;r++){

    sum+=a[r];
    while(sum>s){
            sum-=a[l];
    l++;
    continue;



    }
    ans++;
}
cout<<ans<<endl;
}

