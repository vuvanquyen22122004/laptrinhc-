#include<bits/stdc++.h>
using namespace std;
int first(int a[],int n,int x){
    int l=0,r=n-1;
    int res;
    while(l<=r){
        int m=(l+r)/2;

            if(a[m]==x){
                res=m;
                r=m-1;
            }
            else if(a[m]<x){
                l=m+1;
            }
            else r=m-1;
        }
        return res;
    }

int last(int a[],int n,int x){
    int l=0,r=n-1;
    int res;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            res=m;
            l=m+1;

        }
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return res;
}

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<first(a,n,x)<<" "<<last(a,n,x);

}
