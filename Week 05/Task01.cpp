#include<iostream>
using namespace std;

void sum(int, int);

main()
{
 int n1, n2;
 
 cout<<"Enter first number: ";
 cin>>n1;
 
 cout<<"Enter second number: ";
 cin>>n2;
 
 sum(n1, n2);
}

void sum(int a, int b)
{
 int c = a+b;
 cout<<"Sum: "<<c;
}