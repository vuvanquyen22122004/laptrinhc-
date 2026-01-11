#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    int i=0,j=0;

    long long ans=0;
    while(i<n&&j<m){
            if(a[i]<b[j]){
                i++;
                continue;
            }
            else if(a[i]>b[j]){
                j++;
                continue;
            }
            int dem1=0,dem2=0;
            while(i<n&&a[i]==b[j]){
                    dem1++;
            i++;

            }
            int tmp=a[i-1];
            while(tmp==b[j]&&j<m){
                dem2++;
                j++;
            }
            ans+=dem1*dem2;
    }
    cout<<ans;
}


