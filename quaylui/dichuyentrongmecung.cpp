#include<bits/stdc++.h>
using namespace std;
int n,a[11][11],m;


int cnt;

void trys(int x,int y){
    if(x==m&&y==n){
        
      cnt++;
       return;
    }
    if(x<=m&&a[x+1][y]>=0){
        trys(x+1,y);
       
       
    }
    if(y<=n&&a[x][y+1]>=0){
            
        trys(x,y+1);
           
    }        
}

    

int main(){
    int t;
    cin>>t;
    while(t--){
        cnt=0;
       cin>>m>>n;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
       
       
    
        trys(1,1);
       
      cout<<cnt<<endl;


    }

}