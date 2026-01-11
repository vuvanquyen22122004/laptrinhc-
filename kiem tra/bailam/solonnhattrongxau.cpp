#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
   if (a.size() != b.size())
   return a.size() > b.size();
   return a > b;
}
void check(string &s){
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])) s[i]=' ';
    }

}
string xuly(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
            if(s[0]!='0') break;
        while(s[i]=='0'){
            cnt++;
            i++;

        }
        break;

    }
    if(cnt==s.size()) return "0";

    else s.erase(0,cnt);
    return s;

}

int main(){
    string s;
    cin>>s;
    check(s);
    stringstream ss(s);
    string tmp;
    vector<string>v;
    while(ss>>tmp){

            v.push_back(tmp);
    }
   for(int i=0;i<v.size();i++){
    v[i]=xuly(v[i]);
   }
   sort(v.begin(),v.end(),cmp);
   cout<<v[0];

}
