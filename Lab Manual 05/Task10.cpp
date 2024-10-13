#include<iostream>
using namespace std;

void check(char);

main()
{
 char ch;

 cout<<"Enter (A/a): ";
 cin>>ch;

 check(ch);
}

void check(char ch)
{
 if(ch=='A')
   cout<<"You enter Capital";
 else 
   cout<<"You entered Small";
}