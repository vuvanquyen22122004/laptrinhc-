#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {  // Đọc từng dòng
        cout << ">> " << line << endl;
    }
    cout << "Kết thúc nhập!" << endl;
    return 0;
}
