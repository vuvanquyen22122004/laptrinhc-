#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){


    int t;
    cin>>t;
    long long a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    long long sum1=0,sum2=INT_MIN;
    for(int i=0;i<t;i++){

       sum1+=a[i];
     sum2=max(sum1,sum2);
     if(sum1<0) sum1=0;

    }
    cout<<sum2<<endl;
}
}
