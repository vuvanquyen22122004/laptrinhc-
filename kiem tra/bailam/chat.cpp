#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& arr, int K) {
    sort(arr.begin(), arr.end()); // Sắp xếp mảng
    int count = 0, n = arr.size();

    for (int i = 0; i < n-1; i++) {
        int target = K - arr[i];
        int left = i + 1, right = n - 1;

        // Tìm kiếm nhị phân phần tử target trong khoảng [i+1, n-1]
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                count++; // Nếu tìm thấy cặp số hợp lệ
                break;   // Không xét tiếp vì chỉ tính một lần
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << countPairs(A, K) << endl;
    }
    return 0;
}

