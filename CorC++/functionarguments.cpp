#include<iostream>
using namespace std;
int shout(int n,string p="BCS");//function declaration with a default argument which can only be on the RHS

int main()
{
    int m=7;
    string t="Benjamin";
    int ans=shout(m);//function call
    cout<<"result = "<<ans<<endl;
    return 0;
}
int shout(int n,string p)//function definition
{
for (int i=0;i<n;i++)

    cout<<"Hey " <<p<< " !!!"<<endl;
    n*=2;
    return n;

}