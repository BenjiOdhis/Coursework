#include<iostream>
using namespace std;
int main()
{
    int rows,i,j,k,cols;
    rows =1;
    cols=0;
    for(i=5;i>=rows;i--)
    {
        for(k=0;k<cols;k++)
        {
cout<<"\t";
        }
        cols++;
for(j=i;j>0;j--)
{

cout<<"*"<<"\t";

}
cout<<"\n";
    }
    return 0;
}