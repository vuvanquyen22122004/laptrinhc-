#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long best_sum = LLONG_MAX; // Lưu tổng gần nhất với 0
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                long long sum = a[i] + a[j];
                if (abs(sum) < abs(best_sum)) {
                    best_sum = sum;
                }
            }
        }

        cout << best_sum << endl;
    }
    return 0;
}

