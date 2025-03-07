#include<iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score" << "\n";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100.";
    } else {
        switch (score / 10) {
            case 10:cout << "Grade A\nExcellent";
            break;
            case 9:
                cout << "Grade A\nExcellent";
                break;
            case 8:
                cout << "Grade B+\nVery Good";
                break;
            case 7:
                cout << "Grade B\nGood";
                break;
            case 6:
                cout << "Grade C+\nAbove Average";
                break;
            case 5:
                cout << "Grade C\nFair";
                break;
            case 4:
                cout << "Grade D+\nBelow Average";
                break;
            case 3:
                cout << "Grade D\nPoor";
                break;
            default:
                cout << "Grade E\nVery Poor";
                break;
        }
    }

    return 0;
}