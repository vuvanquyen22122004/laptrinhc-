#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        set<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            int y=abs(x-a[i]);
            v.insert(y);
        }


        for(int m:v){
            for(int i=0;i<n;i++){
                    int z=abs(x-a[i]);
                if(z==m){
                        cout<<a[i]<<" ";
}
        }
}
    cout<<endl;
}
}
