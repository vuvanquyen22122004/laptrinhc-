#include<bits/stdc++.h>
using namespace std;
int cot[100],chinh[100],phu[100],n;
int x[100];
int cnt;
void try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j]==1&&chinh[i-j+n]==1&&phu[i+j-1]==1){
            cot[j]=chinh[i-j+n]=phu[i+j-1]=0;
            x[i]=j;
        
        if(i==n){
            cnt++;
        }
        else{
            try(i+1);
        }
        cot[j]=chinh[i-j+n]=phu[i+j-1]=1;
        

    }
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cot[1]=chinh[1]=phu[1]=1;
        cin>>n;
        cnt=0;
        try(1);
        cout<<cnt<<endl;
    }


}