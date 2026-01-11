#include<bits/stdc++.h>
using namespace std;
void check(string a){
    int cnt=0;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]-'0'<a[i+1]-'0'){
           cnt++;
        }
        if(cnt==a.size()-1||a[i]==0) {
                cout<<"-1"<<endl;
        return ;
    }
    }

    int i=a.size(),q;
    while(a[i]-'0'<=a[i+1]-'0'&&i<a.size()-1){
        i++;
        q=i;

    }

    int res=INT_MIN;
    int ans=0;
    for(int j=a.size()-1;j>=q;j--){
        if(a[j]-'0'<a[q]-'0'&&a[j]-'0'>=res){
            res=max(res,a[j]-'0');
            ans=j;
        }

    }
    swap(a[q],a[ans]);
    for(auto x:a){
        cout<<x;
    }
    cout<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        check(a);

    }
}
