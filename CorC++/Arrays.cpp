#include<iostream>
using namespace std;
int main()
{
    string members [2][3];//initializing an 2D array,starting with rows then columns
    for(int row =0;row<2;row++){
    for(int col=0;col<3;col++)
    {
cin>>members[row][col];
    }
    cout<<endl;
    }
    for(int row =0;row<2;row++){
        for(int col=0;col<3;col++)
        {
    cout<<members[row][col]<<"\t\t";
        }
        cout<<endl;
        }
        
    return 0;
}