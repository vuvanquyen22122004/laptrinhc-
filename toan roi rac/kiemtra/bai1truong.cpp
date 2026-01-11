#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int bac[1001];
int n,m;
int main(){
    int t;
    cin>>t>>n>>m;
    memset(a,0,sizeof(a));
    memset(bac,0,sizeof(bac));
    while(m--){
        int x,y;
        cin>>x>>y;
        bac[x]++;
        bac[y]++;
        a[x][y]=1; a[y][x]=1;
    }
    if(t==1){
        for(int i=1;i<=n;i++){
            cout<<bac[i]<<" ";

        }
        return 0;
    }
   cout<<n<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";

    }
    cout<<endl;
    }
}

