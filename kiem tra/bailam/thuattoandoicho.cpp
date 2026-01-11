#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++){
            if(a[j]<a[i]){
                swap(a[i],a[j]);
            }
        }
        cout<<"buoc" <<i+1<< ":" ;
        for(auto x:a){
            cout<<x<<" ";

        }
        cout<<endl;
    }
}
