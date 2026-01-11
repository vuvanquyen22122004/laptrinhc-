#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        long long a1[n1],a2[n2],a3[n3];
        map<long long,int>mp;
        for(int i=0;i<n1;i++){
            cin>>a1[i];
            mp[a1[i]]=1;
        }
        for(int j=0;j<n2;j++){
            cin>>a2[j];
            if(mp[a2[j]]==1) mp[a2[j]]=2;
            else mp[a2[j]]=1;
        }
        vector<long long>v;
        for(int h=0;h<n3;h++){
                cin>>a3[h];
        if(mp[a3[h]]==2) v.push_back(a3[h]);


        }
        sort(v.begin(),v.end());
        if(v.size()==0){
            cout<<"-1"<<endl;
        }

        else{
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
}
