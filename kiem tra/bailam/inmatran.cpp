#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int cmp=0;
        int ok=0;
        vector<int>v;
        for(int i=0;i<n;i++){
                if(cmp==0){
                for(int j=0;j<n;j++){
                        v.push_back(a[i][j]);
                cmp++;
                }
                }
                else if(cmp==n){
                    for(int j=n-1;j>=0;j--){
                        v.push_back(a[i][j]);
                        cmp--;
                    }
                }
                else break;

        }
        for(int x:v){
            cout<<x<<" ";
        }


    cout<<endl;
}
}

