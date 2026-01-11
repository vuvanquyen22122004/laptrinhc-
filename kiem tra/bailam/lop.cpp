#include<bits/stdc++.h>
using namespace std;
class sinhvien{
private:
    string ten,lop;
    double gpa;
public:
    friend istream& operator>>(istream &in,sinhvien &x);
    friend ostream& operator <<(ostream &out,sinhvien x);
    friend bool operator <(const sinhvien x,const sinhvien y);

};
 bool operator <(const sinhvien x,const sinhvien y){
     return x.gpa<y.gpa;

 }

istream& operator>>(istream &in,sinhvien &x){
    cout<<"nhap ho va ten :";
    getline(in,x.ten);
    cout<<"nhap lop :";
    getline(in,x.lop);
    cout<<"diem :";
    cin>>x.gpa;
    cin.ignore(1);
    return in;
}
ostream& operator <<(ostream &out,sinhvien x){
    out<<x.ten<<" "<<x.lop<<" "<<fixed<<setprecision(2)<<x.gpa;
    return out;

}
int main(){
    sinhvien x,y;

    cin>>x>>y;
   if(x<y) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
