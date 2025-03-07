#include<iostream>
using namespace std;
int shout(int &n,string &p);//function declaration with a reference variables

int main()
{
    int m=7;
    string t="Benjamin";
    int ans=shout(m,t);//function call
    cout<<"result = "<<ans<<endl;
    cout<<"M ="<<m<<endl;
    return 0;
}
int shout(int &n,string &p)//function definition
{
for (int i=0;i<n;i++)

    cout<<"Hey " <<p<< " !!!"<<endl;
    n*=2;
    return n;

}