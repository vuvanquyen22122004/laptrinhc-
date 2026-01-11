#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
    string msv,ten;
    double gpa;
    string dc;

 void in(){
        cout<<msv<<" "<<ten<<" "<<fixed<<setprecision(2)<<gpa<<" "<<dc<<endl;
    }
    void nhap(){
        getline(cin,msv);
        getline(cin,ten);
        cin>>gpa;
        cin.ignore(1);
        getline(cin,dc);
    }

};
int main(){
    sinhvien x;
    x.nhap();
   sinhvien y=x;


    y.in();
}

