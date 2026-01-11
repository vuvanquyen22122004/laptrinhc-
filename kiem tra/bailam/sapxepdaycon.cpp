#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        vector<int> B = A;
        sort(B.begin(), B.end());

        int start = 0;
        while (start < n && A[start] == B[start]) {
            start++;
        }

        int end = n - 1;
        while (end >= 0 && A[end] == B[end]) {
            end--;
        }

        if (start > end) {
            cout << "0 0\n";
        } else {
            cout << start + 1 << " " << end + 1 << "\n";
        }
    }

    return 0;
}
