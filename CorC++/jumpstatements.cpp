#include<iostream>
using namespace std;
int main()
{
 int rows;
 cout<<"Enter the no. of rows\n";
 cin>> rows;
 int i=1;
 for(i=1;i<=rows;i++)
 {
    if(i==5)continue;//skips to the next iteration
    cout<<i<< endl;
    if(i==7)break;//stops the loop
    
 }
 
    return 0;

}