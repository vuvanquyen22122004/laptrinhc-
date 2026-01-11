#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<string> generateGray(int n) {
    vector<string> result;
    unordered_set<string> visited;
    string current(n, '0');
    result.push_back(current);
    visited.insert(current);
    int total = (1 << n);
    while (result.size() < total) {
        bool found = false;
        for (int i = n - 1; i >= 0; --i) {
            string next = current;
            next[i] = (next[i] == '0') ? '1' : '0';
            if (!visited.count(next)) {
                current = next;
                result.push_back(current);
                visited.insert(current);
                found = true;
                break;
            }
        }
        if (!found) break; // Tránh vòng lặp vô hạn (không xảy ra với n hợp lệ)
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<string> grayCodes = generateGray(n);
        for (const string& code : grayCodes) {
            cout << code << " ";
        }
        cout << endl;
    }
    return 0;
}
