#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<int>st;
   int n;
   cin>>n;
   while(n){
    int x=n%2;
    st.push(x);
    n/=2;
   }
   while(st.empty()!=1){
    cout<<st.top();
    st.pop();
   }
}
