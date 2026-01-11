#include<bits/stdc++.h>
using namespace std;
int n;
int cmin=INT_MAX;
int a[100][100];
int b[100],c[100];
int d;
int ans=INT_MAX;


void nhap(){
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                if(a[i][j]) cmin=min(a[i][j],cmin);
            }

    }
}
void trys(int i){
    for(int j=1;j<=n;j++){
        if(b[j]==0){
                b[j]=1;
        c[i]=j;
        d+=a[c[i-1]][c[i]];
        if(i==n){
            ans=min(ans,d+a[c[i]][1]);


        }
        else if(d+(n-i+1)*cmin<ans){
            trys(i+1);
        }
        d-=a[c[i-1]][c[i]];
        b[j]=0;


        }
    }

}


int main(){
    cin>>n;
    nhap();
    b[1]=1;
    c[1]=1;
    trys(2);
    cout<<ans;




}
