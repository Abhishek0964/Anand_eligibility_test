#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    if (!getline(cin, s)) {
        cout << -1 << endl;
        return 0;
    }

    if (s.empty()) {
        cout << -1 << endl;
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        unsigned char ch = s[i];
        freq[ch]++;
    }

    for (int i = 0; i < s.length(); i++) {
        unsigned char ch = s[i];
        if (freq[ch] == 1) {
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
