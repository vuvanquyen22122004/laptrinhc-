
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int>mp;
	mp.insert({100,200});
	mp[200]=3000;
	mp[300]=2212;
	for(auto it=mp.begin();it!=mp.end();it++){
        cout<<(*it).first<<" "<<(*it).second;
	}
	cout<<endl;
	for(pair<int,int> x:mp){
        cout<<x.first<<" "<<x.second<<" ";
	}
}
