#include <iostream>

using namespace std;

int power(int m, int n) {
    if (n == 0) {
        return 1;
    } else {
        return m * power(m, n - 1);
    }
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