#include<bits/stdc++.h>
using namespace std;

int n, ok, a[100];

void khoitao() {
    for(int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

void sinh() {
    int r = n - 1;
    while(r >= 0 && a[r] == 1) {
        a[r] = 0;
        r--;
    }
    if(r == -1) ok = 0;
    else {
        a[r] = 1;
    }
}

bool isThuanNghich() {
    for(int i = 0; i < n / 2; i++) {
        if(a[i] != a[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> n;
    khoitao();
    ok = 1;
    while(ok) {
        if(isThuanNghich()) {
            for(int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}
