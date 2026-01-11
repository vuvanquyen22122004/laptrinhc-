#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    map<string,int>mp;
    while(t--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        string tmp;
        stringstream ss(s);
       string res="";

       vector<string>v;


        while(ss>>tmp){
            v.push_back(tmp);
        }
       res+=v[v.size()-1];
        for(int i=0;i<v.size()-1;i++){
           res+=v[i][0];
           mp[res]++;
        }
        if(mp[res]==1) cout<<res;
        else cout<<res<<mp[res];
        cout<<"@gmail.com";
      cout<<endl;

    }
}
