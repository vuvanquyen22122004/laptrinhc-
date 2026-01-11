#include<bits/stdc++.h>
using namespace std;
int n;vector<vector<int>>s;
void trys(vector<int>ve){

if(ve.size()==1) return;
vector<int>v;
for(int j=0;j<ve.size()-1;j++){
    v.push_back(ve[j]+ve[j+1]);
}
s.push_back(v);
trys(v);
}


int main(){
    int t;
    cin>>t;
    while(t--){
            cin>>n;
            vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    trys(a);
    for(int j=s.size()-1;j>=0;j--){

       cout<<"[";
       for(int h=0;h<s[j].size();h++){
        cout<<s[j][h];
        if(h!=s[j].size()-1) cout<<" ";
       }
       cout<<"]";
       cout<<" ";
    }
    s.clear();
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1) cout<<" ";

    }
    cout<<"]";
    cout<<endl;

    }

}


