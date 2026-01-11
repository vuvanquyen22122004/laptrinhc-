#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    for(int i=1;i<=10;i++){
        a[i]=i;

    }
    vector<int>v(a+1,a+10+1);
    for(auto x:v){
        cout<<x<<endl;
    }
}
