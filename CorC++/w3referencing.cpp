#include<iostream>
using namespace std;
int main()
{
    string food ="Pizza";//food variable
    string &meal = food;//refernce to food
    cout<<food<<"\n";//outputs Pizza
    cout<<meal<<"\n";//outputs Pizza
    cout<<&food<<"\n";//outputs its memory address
    //to store  the memory address as a  variable we use pointers
    string* ptr= &food;
    cout<<ptr<<"\n";//outputs memory address of variable food
    //the dereference operator
    cout<<*ptr<<"\n";//outputs Pizza
    //changing the value of the pointer will change the value of the referenced variable
    *ptr= "Benji";
    cout<<food<<"\n";//outputs Benji
        return 0;
}