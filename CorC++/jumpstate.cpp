#include<iostream>
using namespace std;
int main()
{
    int a=1;
 while(a<=10)
 {
 if(a==5)
 break;
 cout << "\nStatement " << a;
 a++;
 }
 cout << "\nEnd of Program.";
 a=0;
 while(a<10)
 {
 a++;
 if(a==5)
 continue;
 cout << "\nStatement " << a;
 }
 cout << "\nEnd of Program.";
    return 0;
}