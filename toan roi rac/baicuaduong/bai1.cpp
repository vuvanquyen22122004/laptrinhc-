
#include <bits/stdc++.h>
using namespace std ;

int main(){
	int t;cin>>t;
	int n,m;
	cin>>n>>m;
	if(t==1){
		int a[101][101];
		for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
		}
		for(int i=1;i<=n;i++){
			int cong=0,tru=0;
			for(int j=1;j<=n;j++) cong+=a[i][j];
			for(int j=1;j<=n;j++) tru+=a[j][i];
			cout<<tru<<" "<<cong<<endl;
		}
	}
	else{
		vector<int> adj[n+1];
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
		}
		cout<<n<<endl;
		for(int i=1;i<=n;i++){
			cout<<adj[i].size()<<" ";
			for(auto c:adj[i]) cout<<c<<" ";
			cout<<endl;
		}
	}
}
