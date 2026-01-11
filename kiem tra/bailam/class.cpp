#include<bits/stdc++.h>
using namespace std;
class sinhvien{
private:
    string ten,lop;
    double gpa;
public:
    sinhvien();
    sinhvien(string name ,string lop1 ,double diem );
      void xinchao();
       void dihoc();
};
sinhvien::sinhvien(){
    cout<<"vai ca lon"<<endl;
}
sinhvien::sinhvien(string name,string lop1,double diem){
    cout<<"ham chua tham so"<<endl;
    ten=name;
    lop=lop1;
    gpa=diem;
}
void sinhvien::xinchao(){
    cout<<"xinchao"<<endl;
}
 void sinhvien::dihoc(){
    cout<<"yeu linh"<<endl;
}
int main(){

    sinhvien x("vu van quyen","d23cqkh092",3.91);

    x.xinchao();
    x.dihoc();

}
