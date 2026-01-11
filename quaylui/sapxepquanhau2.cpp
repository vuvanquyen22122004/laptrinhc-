#include<bits/stdc++.h>
using namespace std;
int a[100][100],cot[100],chinh[100],phu[100];
int cnt=INT_MIN;
int d;
int x[100];
void trys(int i){
    for(int j=1;j<=8;j++){
        if(cot[j]==1&&chinh[i-j+8]==1&&phu[i+j-1]==1){
            x[i]=j;
            cot[j]=chinh[i-j+8]=phu[i+j-1]=0;
            d+=a[i][x[i]];
            if(i==8){
                cnt=max(cnt,d);

            }
            else{
                trys(i+1);

            }
            d-=a[i][x[i]];
            cot[j]=chinh[i-j+8]=phu[i+j-1]=1;
        }
    }
}
int main(){
    int t;
    cin>>t;
    int q=1;
    int k=t;
    while(t--){


    d=0;
    cnt=INT_MIN;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>a[i][j];
        }
    }
    for(int j=1;j<=99;j++){
        cot[j]=chinh[j]=phu[j]=1;
    }
    trys(1);
    if(q<=k){
cout<<"Test"<<" "<<q<<":"<<" ";
    q++;
    }
    cout<<cnt<<endl;
}
}
