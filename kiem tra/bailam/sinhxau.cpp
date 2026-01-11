#include<bits/stdc++.h>
using namespace std;
int ok=1;
void solve(int a[],int n){
    int i=n;
    while(i>0&&a[i]!=0){
        a[i]=0;
        i--;
    }
    if(i>0) a[i]=1;
    else ok=0;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
    while(ok){
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        solve(a,n);
    }

}
