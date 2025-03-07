#include<iostream>
using namespace std;
int main()
{
int score;
cout<<"Enter score"<<"\n";
cin>>score;
if (score>=90)
cout<<"Grade A\nExcellent";
else
if (score>=80)
cout<<"Grade B+\nVery Good";
else
if (score>=70)
cout<<"Grade B\nGood";
else
if (score>=60)
cout<<"Grade C+\nAbove Average";
else
if (score>=50)
cout<<"Grade C\nFair";
else
if (score>=40)
cout<<"Grade D+\nBelow Average";
else
if (score>=30)
cout<<"Grade D\nPoor";
else
cout<<"Grade E\nVery Poor";
    return 0;
}