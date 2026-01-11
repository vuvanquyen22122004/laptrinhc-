#include<bits/stdc++.h>
using namespace std;
string ans;
    stack<char> st;

int uutien(char x){
        if(x=='^') return 5;
        else if(x=='*' || x== '/') return 4;
        else if(x== '+' || x== '-') return 3;
         return 2;
}
void solve(char x){



    if(x>='A'&& x<='Z') ans +=x;
    else if(x>='a' && x<='z') ans+=x;
    else if(x=='(') st.push(x);
    else if(x==')'){

        while(!st.empty()&& st.top() != '('){
              ans+=st.top();
                st.pop();

              }
              st.pop();
    }
    else if(x=='^'||x=='+'|| x=='-'|| x=='*'||x=='/'){


    while(!st.empty()&&uutien(st.top())>uutien(x)){
        ans+=st.top();
        st.pop();
    }
    st.push(x);
    }
}

int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            solve(s[i]);
        }

    while(!st.empty()){
        if(st.top()!='('){
            ans+=st.top();
            st.pop();
           }
           st.pop();
    }


        cout<<ans<<endl;
        ans="";


}
}
