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
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector<string>v;
        string word;
        while(ss>>word){
                chuanhoa(word);
        v.push_back(word);

        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    }
}
