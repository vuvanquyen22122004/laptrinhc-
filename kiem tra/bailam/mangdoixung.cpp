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
        int left=0,right=n-1;
        int ok=1;
        for(int i=left;i<=right;i++){
                if(a[left]!=a[right]){
                    ok=0;
                   break;
                }
                left++;
                right--;

        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
