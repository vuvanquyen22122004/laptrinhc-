#include<bits/stdc++.h>
using namespace std;
int a[100][100];
string s;
int ok,n;
void trys(int x,int y){
    if(x==n&&y==n){
        ok=1;
        cout<<s<<" ";
        return;
    }
    if(a[x-1][y]==1){
        s+='U';
        trys(x-1,y);
        s.erase(s.size()-1);
    }


    if(a[x+1][y]==1){
        s+='D';
        trys(x+1,y);
        s.erase(s.size()-1);

    }
    if(a[x][y-1]==1){
        s+='L';
        trys(x,y-1);
        s.erase(s.size()-1);
    }
    if(a[x][y+1]==1){
        s+='R';
        trys(x,y+1);
        s.erase(s.size()-1);


    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        ok=0;
        cin>>n;
        s.clear();
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
