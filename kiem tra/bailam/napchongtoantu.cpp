#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
    string msv,ten;
    float gpa;
    friend istream &operator>>(istream &in,sinhvien &x){
        in>>x.msv>>x.ten>>x.gpa;
        return in;
    }
    friend ostream &operator<<(ostream &out,sinhvien x){
        out<<x.msv<<" "<<x.ten<<" "<<x.gpa;
    }
};
int main(){
    sinhvien x;
    cin>>x;
    cout<<x;
}
