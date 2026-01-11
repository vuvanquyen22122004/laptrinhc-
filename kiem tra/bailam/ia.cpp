#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int res;
    for(int i=0;i<t-1;i++){
            res=i;
        for(int j=i+1;j<t;j++){
            if(a[j]<a[res]){
                res=j;
            }
        }
        swap(a[res],a[i]);
    }
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
}
