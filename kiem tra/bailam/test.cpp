#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    int n;
    cin>>n;
    int a[n];
    int b[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
       b[a[i]]++;
    }
    int x=*max_element(b,b+n);
    cout<<x;

}
