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
    int i = 1;
    while (true) {
        int multiple1 = num1 * i;
        int multiple2 = num2 * i;

        if (multiple1 % num2 == 0) {
            cout << multiple1 << " "<<multiple2 << " ";
            break;
        }

        if (multiple2 % num1 == 0) {
            cout << multiple1 << " "<<multiple2 << " ";
            break;
        }

        cout << multiple1 << " " << multiple2 << " ";

        i++;
    }

    cout << endl;
    return 0;
}