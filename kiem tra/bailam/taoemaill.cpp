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



        vector<string>v;
        string tmp;
        stringstream ss(s);
        while(ss>>tmp){
            v.push_back(tmp);
        }
        string m=v[v.size()-1];


        for(int i=0;i<v.size()-1;i++){
                m+=v[i][0];

        }
        mp[m]++;
        if(mp[m]!=0){
                if(mp[m]==1){
                    cout<<m<<"@gmail.com"<<endl;
                }
                else cout<<m<<mp[m]<<"@gmail.com"<<endl;

        }

    }
}
