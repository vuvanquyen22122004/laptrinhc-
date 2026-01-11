#include<bits/stdc++/h>
using namespace std;
int main()
{

    stack<char>st;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='[') st.push(s[i]);
        else{
            if(st.empty()){
                return false;
            }
            else{
                char x=st.top();
                if(x=='('&&s[i]==')'){
                            st.pop();
                        }
                 else if(x=='['&&s[i]==']'){
                            st.pop();
                        }
                 else{

                 }
            }
        }
    }
}
