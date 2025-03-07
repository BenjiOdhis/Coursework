#include<iostream>
using namespace std;
int shout(int n,string p);//function declaration

int main()
{
    int ans=shout(7,"Benjamin");//function call
    cout<<"result = "<<ans<<endl;
    return 0;
}
int shout(int n,string p)//function definition
{
for (int i=0;i<n;i++)

    cout<<"Hey " <<p<< " !!!"<<endl;
    return n*2;

}