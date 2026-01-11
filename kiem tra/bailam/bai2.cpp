#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v,v+n);
		int res=0;
		int y=INT_MAX;
		for(int i=0;i<n-1;i++){
			res=v[i+1]-v[i];
			if(y>res){
				y=res;
			}

		}
		cout<<res<<endl;
	}
}
