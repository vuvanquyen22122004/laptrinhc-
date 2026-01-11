#include<bits/stdc++.h>
using namespace std;
string s;
int ok,n;
int check[100][100];
int a[100][100];

void trys(int x,int y){
    if(x==n&&y==n){
        ok=1;
        cout<<s<<" ";
        return;
    }
    check[x][y]=1;
    if(x<n&&a[x+1][y]==1&&check[x+1][y]==0){
        s+='D';
        trys(x+1,y);
        s.erase(s.size()-1);
    }
    if(y>1&&a[x][y-1]==1&&check[x][y-1]==0){
        s+='L';
        trys(x,y-1);
        s.erase(s.size()-1);
    }
     if(y<n&&a[x][y+1]==1&&check[x][y+1]==0){
        s+="R";
        trys(x,y+1);
        s.erase(s.size()-1);
    }
    if(x>1&&a[x-1][y]==1&&check[x-1][y]==0){
        s+='U';
        trys(x-1,y);
        s.erase(s.size()-1);
    }



    check[x][y]=0;

    }





int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        ok=0;
        s.clear();
        memset(check,0,sizeof(check));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        if(a[1][1]==0){
            cout<<"-1"<<endl;
            continue;
        }
        trys(1,1);
        if(ok==0){
            cout<<"-1"<<endl;
        }
        cout<<endl;

    }
}
