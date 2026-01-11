#include<bits/stdc++.h>
using namespace std;
class sinhvien{
private:
    string ten,lop;
    double gpa;
public:
    sinhvien(string,string,double);
       void in();
     friend istream& operator>>(istream &in,sinhvien &x);

};
sinhvien::sinhvien(string name,string lops,double diem){

     this->ten=name;
   this-> lop=lops;
   this->gpa=diem;
}
void sinhvien::in(){
    cout<<ten<<" "<<lop<<" "<<gpa;
}
istream& operator>>(istream &in,sinhvien &x){
    getline(cin,x.ten);
    getline(cin,x.lop);
    cin>>x.gpa;
}

int main(){
    sinhvien x("vu van quyen","12a1",3.90);
    cin>>x;
    x.in();


}
