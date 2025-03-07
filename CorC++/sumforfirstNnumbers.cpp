#include<iostream>
using namespace std;
int main()
{
    int x,i,total=0;
    cout<<"Enter a natural number:\t";
    cin>>x;
    for(i=x;i>=0;i--)
    {
  total+=i;
    }
cout<<"The sum of the first "<<x<<" numbers is "<<total;
    return 0;
}