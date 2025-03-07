#include <iostream>
using namespace std;

const int NUM_COWS = 5;
const int DAYS_IN_WEEK = 7;

void readProduction(double production[NUM_COWS][DAYS_IN_WEEK]) {
    for (int i = 0; i < NUM_COWS; ++i) {
        cout << "Enter the production for cow " << i + 1 << " for each day of the week:" << endl;
        for (int j = 0; j < DAYS_IN_WEEK; ++j) {
            cout << "Day " << j + 1 << ": ";
            cin >> production[i][j];
        }
    }
}

void computeAverageDailyProduction(double production[NUM_COWS][DAYS_IN_WEEK], double average[NUM_COWS]) {
    for (int i = 0; i < NUM_COWS; ++i) {
        double sum = 0;
        for (int j = 0; j < DAYS_IN_WEEK; ++j) {
            sum += production[i][j];
        }
        average[i] = sum / DAYS_IN_WEEK;
    }
}

int main() {
    double production[NUM_COWS][DAYS_IN_WEEK];
    double average[NUM_COWS];

    readProduction(production);
    computeAverageDailyProduction(production, average);

    for (int i = 0; i < NUM_COWS; ++i) {
        cout << "Average daily production for cow " << i + 1 << ": " << average[i] << " liters" << endl;
    }

    return 0;
}
