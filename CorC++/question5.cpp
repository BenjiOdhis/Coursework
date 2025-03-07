#include<iostream>
using namespace std;
int main()
{
    int i=0,col,row;
    cin>>row;
    cin>>col;
    do
    {
        int j=0;
       do
        {
        cout<<" @ ";
        j++;
        } while(j<=col); 
cout<<"\n";
i++;
    }while(i<=row);
    return 0;
}