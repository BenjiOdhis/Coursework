#include<iostream>
using namespace std;
int main()
{
    int i=0,col,row;
    cin>>row;
    cin>>col;
    while(i<=row)
    {
        int j=0;
        while(j<=col) 
        {
        cout<<" @ ";
        j++;
        }
cout<<"\n";
i++;
    }
    return 0;
}