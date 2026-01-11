#include<bits/stdc++.h>
using namespace std;
void chen(int a[],int n){
    for(int i=1;i<n;i++){
        int x=a[i],pos=i-1;
        while(pos>=0&&a[pos]>x){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos]=x;
    }

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    chen(a,n);
    for(int x:a){
        cout<<x<<" ";
    }

}
