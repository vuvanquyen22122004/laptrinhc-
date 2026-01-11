#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        vector<string>v;
        stringstream ss(s);
        string tmp;
        while(ss>>tmp){
            v.push_back(tmp);
        }
        for(int i=0;i<v.size();i++){
                v[i][0]=toupper(v[i][0]);

            }

        cout<<v[v.size()-1]<<",";
       for(int i=0;i<v.size()-1;i++){
        cout<<v[i];
        if(i!=v.size()-2) cout<<" ";

       }

        cout<<endl;
    }
}
