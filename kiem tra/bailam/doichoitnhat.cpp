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
       int res;
        int cnt=0;
        int x;
        for(int i=0;i<n-1;i++){
                res=0;
                x=a[i];

            for(int j=i+1;j<n;j++){
                if(a[j]<x){
                    x=a[j];
                    res=j;
                }
            }
            if(res){
                swap(a[i],a[res]);
                cnt++;
            }



        }
        cout<<cnt<<endl;

    }
}
