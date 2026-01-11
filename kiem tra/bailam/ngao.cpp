#include<bits/stdc++.h>
using namespace std;

void chuanhoa(string &s){

    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }

}
int main(){
    int t;
    cin>>t;
    cin.ignore();
     map<string,int>mp;

    while(t--){
        string s;
        getline(cin,s);
        string word;
        vector<string>v;
        stringstream ss(s);

        while(ss>>word){
            v.push_back(word);
        }
        for(int i=0;i<v.size();i++){
            chuanhoa(v[i]);
        }
        string res="";


        res+=v[v.size()-1];
        for(int i=0;i<v.size()-1;i++){
            res+=v[i][0];
        }
        mp[res]++;
            if(mp[res]==1) cout<<res<<"@ptit.edu.vn"<<endl;
            else cout<<res<<mp[res]<<"@ptit.edu.vn"<<endl;

    }
}
