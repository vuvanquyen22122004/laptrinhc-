#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    fstream fs;
    fs.open("test1.txt");
    if(fs.open()){
        cout<<"file mo thanh cong";

    }
    else cout<<"file mo that bai";
}
