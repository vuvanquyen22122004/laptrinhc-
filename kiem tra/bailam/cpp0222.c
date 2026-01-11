
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){

	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int dem=0;
	map<int,int>mp2;
	int x;
	for(int i=0;i<n;i++){
		set<int> se;
		for(int j=0;j<n;j++){
			se.insert(a[i][j]);
		}
		for(auto ii=se.begin();ii!=se.end();ii++){
			mp2[*ii]++;
		}
	}
	for(auto i=mp2.begin();i!=mp2.end();i++){
		if((*i).second==n) dem++;
	}
	cout<<dem<<endl;

}
}
