#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1000];
void trys(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
        for(int i=1;i<=k;i++){
            cout<<a[i];
        }
        cout<<endl;
    }
    else trys(i+1);
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        trys(1);

}
}
