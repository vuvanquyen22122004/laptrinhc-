#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],c[100],n,d[100];
int cnt=0;
void trys(int i){
    for(int j=1;j<=n;j++){
        if(a[j]==1&&b[i-j+n]==1&&c[i+j-1]==1){
            d[i]=j;
            a[j]=b[i-j+n]=c[j+i-1]=0;
            if(i==n){
                cnt++;
            }
            else{
                trys(i+1);
            }
            a[j]=b[i-j+n]=c[i+j-1]=1;
        }
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=99;i++){
        a[i]=b[i]=c[i]=1;
    }
    while(t--){
             for(int i=1;i<=99;i++){
        a[i]=b[i]=c[i]=1;
    }
    cnt=0;
            cin>>n;
        trys(1);
    cout<<cnt<<endl;
    }

}
