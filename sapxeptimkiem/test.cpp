#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100], x[100];
int sum;
vector<string> res;

void trys(int i, int start) {
    for (int j = start; j <= n; j++) {
        x[i] = a[j];
        sum += x[i];
        if (sum == k) {
            string s = "[";
            for (int h = 1; h <= i; h++) {
                if (h > 1) s += " ";
                s += to_string(x[h]);
            }
            s += "]";
            res.push_back(s);
        } else if (sum < k) {
            trys(i + 1, j);
        }
        sum -= x[i];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1); // Sắp xếp mảng
        sum = 0;
        res.clear();
        trys(1, 1);
        if (res.empty()) {
            cout << "-1";
        } else {
            for (size_t i = 0; i < res.size(); i++) {
                if (i > 0) cout << " ";
                cout << res[i];
            }
        }
        cout << endl;
    }
    return 0;
}

