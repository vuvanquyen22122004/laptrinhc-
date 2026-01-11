#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    stack<int>st;

    while(t--){
            cin>>s;
        if(s=="PUSH"){
            int x;
            cin>>x;
            if(x<=1000)
            st.push(x);
        }
        else if(s=="POP"&&st.empty()==false){
            st.pop();
        }

        else if(s=="PRINT"){
            if(st.empty()==true) cout<<"NONE"<<endl;
            else cout<<st.top()<<endl;
        }




}
}
