#include<bits/stdc++.h>
using namespace std;
int n,a[100];
void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
int main(){
    cin>>n;
    khoitao();
    do{
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    while(next_permutation(a+1,a+n+1));

}
