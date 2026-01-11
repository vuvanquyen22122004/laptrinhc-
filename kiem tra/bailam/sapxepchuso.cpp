#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int>se;
        for(int i=0;i<n;i++){
            while(a[i]>=10){
                int x=a[i]%10;
                se.insert(x);
                a[i]/=10;
            }
            if(a[i]) se.insert(a[i]);
        }
        for(int y:se){
            cout<<y<<" ";
        }
        cout<<endl;

    }
}
