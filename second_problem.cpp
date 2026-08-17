#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    long long count = 0;
    long long x;

    // Read numbers until end of input
    while (cin >> x) {
        sum += x;
        count++;
    }

    // N is the count of elements in the array
    long long n = count;
    long long expected_sum = (n + 1) * (n + 2) / 2;

    // Output the missing number
    cout << expected_sum - sum << endl;

    return 0;
}
