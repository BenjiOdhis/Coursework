#include<iostream>
using namespace std;
int main()
{
 int rows=5,cols=1;
 
 int i,k;
 for(i=1;i<=rows;i++)
 {
    
    for(k=5;k>=i;k--)//try to invert the triangles and finally an iscoceles triangle
    {
    cout<<k<<" ";
    }
    cout<<"\n";
    
   }
   
 for(i=5;i>=cols;i--)
 {
    
    for(k=1;k<=i;k++)//try to invert the triangles and finally an iscoceles triangle
    {
      cout<<k<<" ";
    }
    cout<<"\n";
    
 }
 
 
    return 0;

}