#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int n, u, v;
int matrix[MAX][MAX];
bool visited[MAX];

bool dfs(int current, int target, vector<int>& path) {
    visited[current] = true;
    path.push_back(current + 1); // Chuyển về đánh số 1-based
    if (current == target) {
        return true;
    }
    for (int i = 0; i < n; ++i) {
        if (matrix[current][i] && !visited[i]) {
            if (dfs(i, target, path)) {
                return true;
            }
        }
    }
    path.pop_back();
    return false;
}

int main() {
    ifstream in("TK.INP");
    ofstream out("TK.OUT");
    int t;
    in >> t;
    in >> n >> u >> v;
    u--; v--; // Chuyển về chỉ số 0-based
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            in >> matrix[i][j];
        }
    }

    if (t == 1) {
        int count = 0;
        for (int k = 0; k < n; ++k) {
            if (matrix[u][k] && matrix[k][v]) {
                count++;
            }
        }
        out << count;
    } else if (t == 2) {
        vector<int> path;
        memset(visited, false, sizeof(visited));
        bool found = dfs(u, v, path);
        if (found) {
            for (size_t i = 0; i < path.size(); ++i) {
                out << path[i];
                if (i != path.size() - 1) out << " ";
            }
        } else {
            out << 0;
        }
    }

    in.close();
    out.close();
    return 0;
}
