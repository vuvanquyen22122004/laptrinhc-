#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());

        long long ans = 0;
        for (int i = 0; i < N; i++) {
            int target = K - A[i];
            auto left = lower_bound(A.begin() + i + 1, A.end(), target);
            auto right = upper_bound(A.begin() + i + 1, A.end(), target);
            ans += right - left;
        }
        cout << ans << '\n';
    }
    return 0;
}
