#include<bits/stdc++.h>
using namespace std;
void check(string s){
    int sum=0;
    int ans=0;
    for(char x:s){
        if(isdigit(x)){
            sum=sum*10+ x -'0';
        }
        else{
        ans+=sum;
        sum=0;
    }
    }
    ans+=sum;
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        check(s);

    }
    return 0;
}
