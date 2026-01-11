#include<bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n){
    for(int i=1;i<n;i++){
        int x=a[i],pos=i-1;
        while(pos>=0&&x<a[pos]){
            a[pos+1]=a[pos];
            --pos;

        }
        a[pos+1]=x;

    }
}
int main(){
    int a

}
