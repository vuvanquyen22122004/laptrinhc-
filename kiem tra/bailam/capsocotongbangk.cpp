#include<bits/stdc++.h>
using namespace std;
long long a[100001];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>v;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                    v.push_back(a[i]+a[j]);

            }
        }
        int cnt=0;
        for(auto z:v){
            if(z==k) cnt++;
        }
        cout<<cnt<<endl;
    }
}
