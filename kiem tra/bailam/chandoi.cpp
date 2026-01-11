#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int res=0;
		int x;
		int ok=1;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				x=abs(a[j]-a[i]);
				if(x==k){
					cout<<"1"<<endl;
					ok=0;

				}

			}
			if(ok==0) break;
		}
		if(ok) cout<<"-1"<<endl;
	}
}
