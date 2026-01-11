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
    int dem1[256]={0},dem2[256]={0};
    for(char x:s2){
        dem2[x]++;
    }
    int cnt=0,l=0;
    int ans=INT_MAX;
    int idex=-1;

    for(int i=0;i<s1.size();i++){
            dem1[s1[i]]++;
        if(dem1[s1[i]]<=dem2[s1[i]]) cnt++;
        if(cnt==s2.size()){
            while(dem1[s1[l]]>dem2[s1[l]]||dem2[s1[l]]==0){
                if(dem1[s1[l]]>dem2[s1[l]]){
                    dem1[s1[l]]--;
                }
                l++;
            }
            if(ans>i-l+1){
                ans=i-l+1;
                idex=l;

            }
        }
    }
    if(idex==-1) cout<<"-1";
    else{
    cout<<s1.substr(idex,ans);


    }
    }
}
