#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    // Read the entire line (handles spaces correctly)
    if (!getline(cin, s)) {
        cout << -1 << endl;
        return 0;
    }

    // Handle empty string case
    if (s.empty()) {
        cout << -1 << endl;
        return 0;
    }

    // Frequency array for ASCII characters (size 256)
    int freq[256] = {0};

    // Count frequencies of each character in the string
    for (int i = 0; i < s.length(); i++) {
        unsigned char ch = s[i]; // Cast to unsigned char to avoid negative indexes
        freq[ch]++;
    }

    // Find the first character that has a frequency of exactly 1
    for (int i = 0; i < s.length(); i++) {
        unsigned char ch = s[i];
        if (freq[ch] == 1) {
            cout << s[i] << endl;
            return 0;
        }
    }

    // If no character appears exactly once, output -1
    cout << -1 << endl;
    return 0;
}
