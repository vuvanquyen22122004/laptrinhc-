#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<char>v;
        int sum=0;

        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                sum+=s[i]-'0';

            }
            else if(s[i]>='A'&&s[i]<='Z'&&isalpha(s[i])){
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        for(auto x:v){
            cout<<x;
        }
        cout<<sum;
        cout<<endl;
    }
}
