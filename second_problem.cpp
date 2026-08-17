#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    long long count = 0;
    long long x;

    while (cin >> x) {
        sum += x;
        count++;
    }

    long long n = count;
    long long expected_sum = (n + 1) * (n + 2) / 2;

    cout << expected_sum - sum << endl;

    return 0;
}
