#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string,int>mp;

    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]>9) return 0;
        }
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<mp[s[i]];
        }
        cout<<endl;


}
}
