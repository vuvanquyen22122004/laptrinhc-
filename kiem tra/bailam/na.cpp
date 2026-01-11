#include<bits/stdc++.h>
using namespace std;
struct Point{
    double x,y;
};
void input(Point &a){
    cin>>a.x>>a.y;
}
double distance(Point &a,Point &b){
    double y=(a.x-b.x);
    double z=(a.y-b.y);
    double t=sqrt(pow(y,2)+pow(z,2));
    return t;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
