#include<bits/stdc++.h>
using namespace std;
string s;
int ok;
int n;
int a[100][100];
void trys(int x,int y){

    if(a[x][y]!=0){
            if(x==n&&y==n){
        ok=1;
        cout<<s<<" ";
        return ;
    }


    if(a[x+1][y]==1){
        s+='D';
        trys(x+1,y);
        s.erase(s.size()-1);

    }
     if(a[x][y+1]==1){
        s+='R';
        trys(x,y+1);
        s.erase(s.size()-1);
    }

}
}
int main(){
    int t;

    cin>>t;
    while(t--){
        cin>>n;
        ok=0;
       s={0};
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
        if(ok==0) cout<<"-1"<<endl;
        cout<<endl;





    }


}
