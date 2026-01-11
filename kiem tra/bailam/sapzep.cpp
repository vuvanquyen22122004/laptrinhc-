#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    if(a>b) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(auto x:a){
        cout<<x<<" ";
    }
}
