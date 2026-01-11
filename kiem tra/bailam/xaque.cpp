#include<bits/stdc++.h>
using namespace std;
void sapxep(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){


            swap(a[j],a[j+1]);
        }
    }
}
}
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    sapxep(a,t);
    for(int x:a){
        cout<<x<<" ";
    }
}
