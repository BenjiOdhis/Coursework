#include<iostream>
using namespace std;
int main()
{
    int rows,i,j,k,cols;
    rows =1;
    cols=5;
    for(i=5;i>=rows;i--)
    {
        for(k=i-1;k>0;k--)
        {
cout<<"\t";
        }
for(j=5;j>=i;j--)
{

cout<<"*"<<"\t";

}
cout<<"\n";
    }
    return 0;
}