
#include<bits/stdc++.h>
using namespace std;
struct person{
    string name;
    int tuoi;
    person(){}
    person(string ten,int age){
        this->name=ten;
        this->tuoi=age
    }
};
int main(){
    fstream fs;
    fs.open("test.txt");
    if(fs.is_open()==0){
            return 1;
    }
 fs<<"hello";
 fs.close();


}

