#include<bits/stdC++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        string tmp;
        stringstream ss(s1);
      map<string,int>mp;
        while(ss>>tmp){
                mp[tmp]=1;

        }
        stringstream si(s2);
        string tmc;
        while(si>>tmc){
            if(mp[tmc]==1) mp[tmc]=0;
        }
        for(auto x:mp){
            if(x.second==1){
                cout<<x.first<<" ";
            }
        }
        cout<<endl;
    }
}
