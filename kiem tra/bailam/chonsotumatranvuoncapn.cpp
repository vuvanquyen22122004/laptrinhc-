
#include<bits/stdc++.h>
using namespace std;
int mt[100][100];
int main(){
    int n,k;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mt[i][j];
        }
    }
    int a[100];
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    vector<vector<int>>v;

    do{
            int sum=0;
    for(int i=1;i<=n;i++){
        sum+=mt[i][a[i]];


        }
        if(sum==k){
                vector<int>tmp(a+1,a+n+1);
        v.push_back(tmp);
    }
    }
    while(next_permutation(a+1,a+n+1));

    cout<<v.size()<<endl;
    for(auto it:v){
        for(int x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }

}
