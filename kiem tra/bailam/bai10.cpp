
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> array(const string& s) {
    int m = s.size();
    vector<int> lps(m, 0);
    int length = 0;
    int i = 1;
    while (i < m) {
        if (s[i] == s[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
void solve(const string& A, const string& B) {
    int n = A.size();
    int m = B.size();
    vector<int> lps = array(B);
    int i = 0;
    int j = 0;
    while (i < n) {
        if (B[j] == A[i]) {
            i++;
            j++;
        }
        if (j == m) {
            cout << (i - j + 1) << " ";
            j = lps[j - 1];
        } else if (i < n && B[j] != A[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    string A, B;
    cin >> A >> B;
    solve(A, B);
    return 0;
}
