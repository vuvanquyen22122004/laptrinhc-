#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
    string ten,msv;
    float gpa;


    bool operator <(sinhvien other){
        return gpa<other.gpa;
    }

};
int main(){
    int n;
    cin>>n;
    cin.ignore(1);

    sinhvien v[n];
    for(int i=0;i<n;i++){
            getline(cin,v[i].ten);
    getline(cin,v[i].msv);
    cin>>v[i].gpa;
    cin.ignore(1);


    }
    sort(v,v+n);
    for(auto x:v){
        cout<<x.ten<<" "<<x.msv<<" "<<x.gpa;
    }


}


