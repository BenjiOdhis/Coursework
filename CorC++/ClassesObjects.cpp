#include<iostream>
using namespace std;
class animal
{
    public:
string name,colour;
void eat();
void move();
};
void animal::eat()
{
cout<<"Animal eating\n";
}
void animal::move()
{
cout<<name<<" moving\n";
}

int main()
{
    animal p;
    p.colour ="Blue";
    p.name="Dog";
    p.move ();

    return 0;
}