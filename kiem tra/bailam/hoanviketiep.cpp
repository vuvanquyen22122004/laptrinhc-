#include<bits/stdc++.h>
using namespace std;
int n,ok,a[100];
void solve(){
    int i=n-1;
    while(i>=1&&a[i]>a[i+1]){
        i--;
    }
    if(i==0){
        ok=0;
    }
    else{
        int j=n;
        while(j>=i+1&&a[j]<a[i]){
            j--;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){

            cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    ok=1;
    while(ok){


    solve();

    }
}

