#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int d=0;
        int ok=0;

        int j=1;
        while(j<n){

                d+=a[j];
        if(d==sum-d-a[j+1]) { ok=1;
                break;
        }
        j++;



        }
        if(ok==0) cout<<"-1"<<endl;
        else{
            cout<<j+1<<endl;
        }

    }
}
