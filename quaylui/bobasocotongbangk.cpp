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
        int N, K;
        cin >> N >> K;

        if (N < 3) {
            cout << "NO\n";
            continue;
        }

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        bool found = false;

        for (int i = 0; i < N - 2; ++i) {
            if (A[i] > K) break; // Tối ưu khi A[i] vượt quá K

            int target = K - A[i];
            int min_possible = A[i+1] + A[i+2];
            int max_possible = A[N-1] + A[N-2];

            // Kiểm tra target có nằm trong khoảng khả thi không
            if (target < min_possible || target > max_possible) continue;

            int left = i + 1;
            int right = N - 1;

            while (left < right) {
                int current_sum = A[left] + A[right];
                if (current_sum == target) {
                    found = true;
                    break;
                } else if (current_sum < target) {
                    left++;
                } else {
                    right--;
                }
            }

            if (found) break;
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}
