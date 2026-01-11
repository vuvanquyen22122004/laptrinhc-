#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		stringstream ss1(s1);
		stringstream ss2(s2);
		string tmp;
		string cmp;
		map<string,int>mp;
		while(ss1>>tmp){
                mp[tmp]=1;

		}
		while(ss2>>cmp){
            if(mp[cmp]==1){
                mp[cmp]=0;
            }
		}
		for(auto x:mp){
            if(x.second==1){
                cout<<x.first<<" ";
            }
		}
		cout<<endl;

	}
}
