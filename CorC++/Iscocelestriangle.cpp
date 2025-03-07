#include<iostream>
using namespace std;
int main()
{
    int rows,i,j,k;
    cout<<"Enter number of rows\n";
    cin>>rows;
    
    for(i=1;i<=rows;i++)
    {
        for(k=i;k<=rows-1;k++)
        {
cout<<" ";
        }
        
for(j=1;j<=2*i-1;j++)
{
    if(j==1||j==2*i-1||i==rows)

    cout<<"*";
    else 
    cout<<" ";


}
cout<<"\n\n";
    }
    for(i=1;i<=rows;i++)
    {
        for(k=i;k<=rows-1;k++)
        {
cout<<" ";
cout<<"\t";
        }
        
for(j=1;j<=2*i-1;j++)
{

    cout<<"*\t";


}
cout<<"\n\n";
    }
    return 0;
}