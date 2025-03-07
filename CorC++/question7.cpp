#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers between 2 and 9: ";
    cin >> num1 >> num2;

    if (num1 < 2 || num1 > 9 || num2 < 2 || num2 > 9) {
        cout << "Invalid input. Please enter numbers between 2 and 9." << endl;
        return 1;
    }

    for (int i = 1; i <= 100; ++i) {
        if ((i % num1 == 0 || i % num2 == 0) && !(i % num1 == 0 && i % num2 == 0)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}