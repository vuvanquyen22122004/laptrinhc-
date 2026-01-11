#include<bits/stdc++.h>
using namespace std;
struct sv{
    string ten,msv;
    float gpa;
    bool operator <(const sv other){
        return gpa<other.gpa;
    }
};
int main(){
    int n;
    cin>>n;
    cin.ignore(1);
    sv x[n];
    for(int i=0;i<n;i++){
    getline(cin,x[i].ten);
    getline(cin,x[i].msv);
    cin>>x[i].gpa;


}
sort(x,x+n);
for(auto v:x)
cout<<v.ten<<" "<<v.msv<<" "<<v.gpa;
}
