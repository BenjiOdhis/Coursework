#include <iostream>

using namespace std;

int power(int m, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= m;
    }
    return result;
}

int main() {
    int m, n;
    cout << "Enter base (m): ";
    cin >> m;
    cout << "Enter exponent (n): ";
    cin >> n;

    int result = power(m, n);
    cout << m << " raised to the power of " << n << " is " << result << endl;

    return 0;
}