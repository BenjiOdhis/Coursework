#include<iostream>
using namespace std;
int main()
{
    int x,i,total=1;
    cout<<"Enter a natural number:\t";
    cin>>x;
    for(i=x;i>1;i--)
    {
  total*=i;
    }
cout<<"The factorial of the first "<<x<<" numbers is "<<total;
    return 0;
}