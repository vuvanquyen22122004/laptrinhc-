#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        vector<long long>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back(a[i]);

        }
        sort(v.begin(),v.end());
        int ok=0;
        for(int i=0;i<n-1;i++){
            if(a[i+1]>a[i]) ok=1;
        }
        if(ok==0) cout<<"-1"<<endl;
        else{
                cout<<v[0]<<" "<<v[1];
        }
        cout<<endl;
    }
}
