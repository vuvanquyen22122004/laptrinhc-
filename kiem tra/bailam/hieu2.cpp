#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        map<string,int>mp;
        stringstream ss(s1);
        string tmp;

        while(ss>>tmp){
            mp[tmp]=1;
        }
        stringstream vv(s2);
        string cnt;
        while(vv>>cnt){
            mp[cnt]=0;
        }
        for(auto x:mp){
            if(x.second==1){
                cout<<x.first<<" ";
            }
        }
        cout<<endl;

    }
}
