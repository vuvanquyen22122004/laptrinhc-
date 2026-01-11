#include<bits/stdc++.h>
using namespace std;
int ok;
void solve(int a[],int n){
    int i=n-1;


    while(i>=0&&a[i]!=0){
            a[i]=0;
        i--;
    }
    if(i>=0) a[i]=1;
    else ok=0;


}
int main(){
    int n;
    cin>>n;
    int a[n+1];

ok = 1;
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    while(ok){
       for(auto it=a;it<a+n;it++){
        cout<<*it;
       }
        cout<<endl;
        solve(a,n);

    }


}
