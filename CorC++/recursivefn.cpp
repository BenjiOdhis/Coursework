#include<iostream>
using namespace std;
int FunL(int n);//fn declaration
int FunR(int n);
int main()
{

    int num = 6;
    cout<<"Factorial ="<<FunR(num);
    return 0;
}
int FunL(int n)//fn definition
{
 int ans= 1;
 for(int i=2;i<=n;i++)
 {
    ans*=i;
    
 }
 
}
    

int FunR(int n)
{
    if(n<2)
    return 1;
    else
    return n*FunR(n-1);
}