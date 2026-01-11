#include<bis/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=i;
    }
    int j=n-1;k=n;
    while(a[j]>a[j+1]&&j>0) j--;
}
