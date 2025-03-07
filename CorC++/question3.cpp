#include<iostream>
using namespace std;
int main()
{
    int i,j,col,row;
    cout<<"enter no of rows and columns respectively\n";
    cin>>row;
    cin>>col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++) 
        {
        cout<<" @ ";
        }
cout<<"\n";
    }
    return 0;
}