#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> result;

void generate(int pos, string current) {
    if (pos == n - 1) {
        current += 'A';
        result.push_back(current);
        return;
    }
    char last_char = current.back();
    if (last_char == 'H') {
        generate(pos + 1, current + 'A');
    } else {
        generate(pos + 1, current + 'A');
        generate(pos + 1, current + 'H');
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        result.clear();
        if (n >= 2) {
            string start = "H";
            generate(1, start);
        }
        for (string s : result) {
            cout << s << endl;
        }
    }
    return 0;
}
