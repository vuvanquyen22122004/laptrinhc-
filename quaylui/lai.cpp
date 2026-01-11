#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int b[100],d=0;
int c[100],n;
int ans=INT_MAX;
void nhap(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cin>>a[i][j];
    }
}

}
void trys(int i){
    for(int j=1;j<=n;j++){
        if(b[j]==0 && a[c[i-1]][j] > 0){
            c[i]=j;
            b[j]=1;
            d+=a[c[i-1]][c[i]];
            if(i==n){
                if(a[c[n]][1] > 0) // kiểm tra có đường về thành phố 1 không
                    ans=min(ans,d+a[c[n]][1]);
            }
            else{
                trys(i+1);
            }
            b[j]=0;
            d-=a[c[i-1]][c[i]];
        }
    }
}

int main(){
    cin>>n;
    nhap();
    c[1]=1;
    b[1]=1;
    trys(2);
    cout<<ans;

}
