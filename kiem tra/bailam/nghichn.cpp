#include<bits/stdc++.h>
using namespace std;
int main(){
    string msv;
    for(int i=0;i<20;i++){
            string s=to_string(i+1);
        while(s.size()<5){
            s="0"+s;
        }

        cout<<s<<endl;
    }
}

