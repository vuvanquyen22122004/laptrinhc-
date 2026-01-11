#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>s;
    s.insert(100);
    s.insert(200);
    s.insert(300);
    s.insert(100);
s.erase(100);
for(int x:s){
    cout<<x<<endl;
}
}
