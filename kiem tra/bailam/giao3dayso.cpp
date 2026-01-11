#include <bits/stdc++.h>
using namespace std;

vector<long long> removeDuplicates(long long arr[], int n) {
    vector<long long> res;
    if (n == 0) return res;
    res.push_back(arr[0]);
    for (int i = 1; i < n; ++i) {
        if (arr[i] != res.back()) {
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        long long a[n1], b[n2], c[n3];
        for (int i = 0; i < n1; ++i) cin >> a[i];
        for (int i = 0; i < n2; ++i) cin >> b[i];
        for (int i = 0; i < n3; ++i) cin >> c[i];

        vector<long long> A = removeDuplicates(a, n1);
        vector<long long> B = removeDuplicates(b, n2);
        vector<long long> C = removeDuplicates(c, n3);

        int i = 0, j = 0, k = 0;
        vector<long long> res;

        while (i < A.size() && j < B.size() && k < C.size()) {
            long long current = max({A[i], B[j], C[k]});

            // Di chuyển các con trỏ để tìm phần tử >= current
            while (i < A.size() && A[i] < current) ++i;
            while (j < B.size() && B[j] < current) ++j;
            while (k < C.size() && C[k] < current) ++k;

            // Kiểm tra xem cả ba có cùng giá trị không
            if (i < A.size() && j < B.size() && k < C.size()
                && A[i] == B[j] && B[j] == C[k]) {
                res.push_back(current);
                ++i; ++j; ++k;
            }
        }

        if (res.empty()) {
            cout << "-1\n";
        } else {
            for (long long x : res) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
