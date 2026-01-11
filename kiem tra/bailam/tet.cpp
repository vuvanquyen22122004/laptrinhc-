#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int tong=0;
        vector<char>v;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z') v.push_back(s[i]);
            else tong +=s[i]-'0';
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<tong;
        cout<<endl;
        }
    }
