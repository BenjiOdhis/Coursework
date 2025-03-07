#include<iostream>//pp cmd
using namespace std;
int main()
{
    int rating;
cout<<"Enter the rating\n";
cin>>rating;
switch(rating)
{
case 1:cout<<"Very poor"<<endl;break;

case 2:cout<<"poor"<<endl;break;
case 3:cout<<"fair"<<endl;break;
case 4:cout<<"good"<<endl;break;
case 5:cout<<"excellent"<<endl;break;
default:cout<<"Invalid rating"<<endl;
}
return 0;
}
