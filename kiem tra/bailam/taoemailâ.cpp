#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
void chuanhoa(string s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);

    }

    stringstream ss(s);
    string tmp;
    vector<string>v;

    while(ss>>tmp){
        v.push_back(tmp);
        mp[tmp]++;
    }

    cout<<v[v.size()-1];
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i][0];
    }
    if(mp[v[v.size()-1]]>=2) cout<<mp[v[v.size()-1]];
    cout<<"@gmail.com";
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin,s);
        chuanhoa(s);

    }
}
