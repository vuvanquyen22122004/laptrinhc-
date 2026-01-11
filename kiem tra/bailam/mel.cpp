#include<bits/stdc++.h>
using namespace std;
void lon(int m,int s){
    long long l[m];
    int i=0;
    while(s>=10&&i<m){
        l[i]=9;
        i++;
        s-=9;
    }
    if(s<10){
        l[i]=s;

    }
    for(int i=0;i<m;i++){
        cout<<l[i];
    }
}

int main(){
    int m,s;
    cin>>m>>s;

    if(s==0&&m>1||s>9*m){

        cout<<"-1 -1"<<endl;
    }
    lon(m,s);

}
