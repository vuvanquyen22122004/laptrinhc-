
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
	map<int,int>mp1;
	map<int,int>mp2;
	for(int j=0;j<n;j++){
		mp1[a[0][j]]=1;
	}
	int x;
	for(int i=1;i<n;i++){
		x=i;
		for(int j=0;j<n;j++){
			if(mp1[a[i][j]]){

			if(mp2[a[i][j]]<x+1)
			 mp2[a[i][j]]++;
		}
			if(mp2[a[i][j]]==n)

			 dem++;



		}
	}
	cout<<dem<<endl;

}
}
