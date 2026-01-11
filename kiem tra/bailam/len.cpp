
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	vector<char>v;
	for(auto x:s){
		if(x!='a'&& x!='e'&&x !='i'&& x!='o'&& x!='u'&& x!='y') v.push_back(x);
	}
	for(int i=0;i<v.size();i++){
		 cout<<"."<<v[i];
	}


}
