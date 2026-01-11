#include<bits/stdc++.h>
using namespace std;
void solve(string s1,string s2){
    int left=0,dem=0,a[256]={0},b[256]={0};
    int ans=INT_MAX;
    int res;
    for(int i=0;i<s2.size();i++){
            b[s2[i]]++;
        }
    for(int j=0;j<s1.size();j++){
            a[s1[j]]++;
       if(a[s1[j]]<=b[s1[j]]){
        dem++;
       }
    if(dem==s2.size()){
            while(a[s1[left]]>b[s1[left]]||b[s1[left]]==0){
                if(a[s1[left]]>b[s1[left]]) a[s1[left]]--;
                left++;
            }

        if(ans>j-left+1){
            ans=j-left+1;
            res=left;
        }
    }
}
    cout<<s1.substr(res,ans)<<endl;
}
int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        solve(s1,s2);


    }
}
