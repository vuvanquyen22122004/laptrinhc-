#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b){
    return a>b;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res,minx;

    for(int i=0;i<n-1;i++){
            res=i;

        for(int j=i+1;j<n;j++){
            if(a[j]<a[res]){
                    res=j;

            }
        }
            swap(a[i],a[res]);

    }
    for(int x:a){
        cout<<x<<" ";
    }
}
