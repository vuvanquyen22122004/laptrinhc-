#include<bits/stdc++.h>
using namespace std;
class sinhvien{
private:
    string ten,lop;
    float gpa;
public:
    double getgpa();
    void setgpa();


    void nhap();

    void in();


};
void setgpa(double gpa){
    gpa=gpa;
}
bool cmp(sinhvien a,sinhvien b){
    return a.getgpa()<b.getgpa();

}



void sinhvien::nhap(){
    cout<<"nhap ten: "; getline(cin,ten);
    cout<<"nhap lop: "; getline(cin,lop);
    cout<<"nhap diem: "; cin>>gpa;
    cin.ignore(1);
}
void sinhvien::in(){
    cout<<ten<<" "<<lop<<" "<<gpa;
}
int main(){
    sinhvien x;



}
