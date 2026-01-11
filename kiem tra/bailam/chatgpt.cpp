#include <bits/stdc++.h>
using namespace std;

void countPairs(vector<int>& arr, int K) {
    unordered_map<int, int> freq;
    long long count = 0;

    for (int num : arr) {
        count += freq[K - num]; // Số lượng phần tử có giá trị (K - num) đã xuất hiện trước đó
        freq[num]++;            // Cập nhật số lần xuất hiện của num
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        countPairs(A, K);
    }

    return 0;
}
