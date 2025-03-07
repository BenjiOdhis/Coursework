#include <iostream>
using namespace std;
int main() {
 int rows = 5;
 int columns = 5;
 int k;
 for (int i = 1; i <= rows; ++i) {
    k=i;

 for (int j = 1; j <= columns; ++j) {

cout<<k;
k++;
 }
 cout << endl;
 }
 for (int i = 1; i <= 5; ++i) {
 for (int j = 1; j <=i; ++j) {
 cout <<i;
 }
 cout << endl;
 }
 return 0;
}
