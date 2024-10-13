#include<iostream>
using namespace std;

int larger(int, int);

main()
{
 int a, b;
 
 cout<<"Enter number 1: ";
 cin>>a;
 
 cout<<"Enter number 2: ";
 cin>>b;
 
 larger(a, b);
}

int larger(int a, int b)
{
 if(a>b)
   cout<<"Greater one is: "<<a;
 else
   cout<<"Greater one is: "<<b;
}