#include<bits/stdc++.h>
using namespace std;
//push
//pop
//top
//size
//
int main(){
    stack<char>st;
    string s;
    cin>>s;
    for(char x:s){
        if(x=='('){
            st.push(x);
        }
        else{
            if(st.empty()){
                cout<<"INVALID"<<endl;
                return 0;
            }
            else{
                st.pop();

            }
        }
    }
  if(st.empty()){
    cout<<"thoa man"<<endl;
  }

   }



