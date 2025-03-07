#include<iostream>
#include<string>
using namespace std;
int main()
{
    string FirstName ="John";
    string SurName="Doe";
    string FullName= FirstName+" "+SurName;//string concatenation
    string ReversName=SurName.append(FirstName);//still string concatenation
    cout<<FullName<<ReversName<<endl<<"The length of your firstname is:"
    <<FirstName.length()<<" letters "<<endl<<SurName[2]<<endl;
    cout<<FirstName[FirstName.length()-1]<<endl;//output last character of string
string MotherName;
cout<<"Enter your mother\'s full name :"<<endl;
getline(cin,MotherName);
cout<< "your mother is called: "<<MotherName;
    return 0;
}