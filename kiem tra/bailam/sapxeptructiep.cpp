#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res;
    int ok;
    for(int i=0;i<n-1;i++){

            res=i;

        for(int j=i+1;j<n;j++){
            if(a[j]<a[res]){
                res=j;
            }

        }

    if(res!=i) swap(a[i],a[res]);
     cout<<"Buoc "<<i+1<<": ";
   for(auto x:a){
    cout<<x<<" ";
   }
    cout<<endl;
    }
}
