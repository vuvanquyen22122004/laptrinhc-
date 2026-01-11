#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    while(l<n-1){
        int x=a[l]+a[l+1];
        if(x%2==0) a.erase(a.begin()+l);
        l++;
    }
    cout<<a.size();

    }

