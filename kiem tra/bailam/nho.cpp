#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>a(n);
		vector<int>b(m);


		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>a[i];

			mp[a[i]]=1;
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			if(mp[b[i]]!=1) mp[b[i]]=0;
		}
		for(auto x:mp){
			cout<<x.first<<" ";
		}
		cout<<endl;
		for(int i=0;i<m;i++){
			if(mp[b[i]]){
				cout<<b[i]<<" ";
				mp[b[i]]=0;
			}
		}
		cout<<endl;

	}
}
