#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
            int cnt=INT_MIN;
        int n;
        cin>>n;
        int a[n+1];
        int y=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ok=0;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]) ok=1;
        }
        if(ok==0){
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            int x=a[i];
        auto it=lower_bound(a+i+1,a+n,x)-a;
        for(int j=it;j<n;j++){

            if(a[j]>x){
                y=j;
            }
        }
        cnt=max(cnt,y-i);


        }
        cout<<cnt<<endl;


    }
}
