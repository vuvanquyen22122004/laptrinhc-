#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int cnt=0;

    for(int i=2;i<=sqrt(n);i++){
        int cnt=0;
       if(n%i==0){
       while(n%i==0){
            cnt++;
       n/=i;


       }
       cout<<i<<" "<<cnt;
       cout<<endl;
    }


}
if(n!=1) cout<<n<<" "<<"1";
}
