#include<iostream>
using namespace std;
int FunL(int n);//fn declaration
int FunR(int n);
inline int add2num(int a,int b);
int main()
{

    int m = 6,n=7;
    cout<<"Result ="<<add2num(m,n);
    return 0;
}
inline int add2num(int a,int b)
{
    int ans=0;
    ans= a+b;
    return ans;
}