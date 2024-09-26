#include<iostream>
using namespace std;

void add(int, int);

main()
{
  int num1;
  int num2;
  char op;

  cout<<"Enter Number 1: ";
  cin>>num1;
  cout<<"Enter Number 2: ";
  cin>>num2;
  cout<<"Enter operator(+,-,/,*): ";
  cin>>op;
  if(op=='+')
     add(num1,num2);
}

void add(int a, int b)
{
  int sum;
 
  sum = a+b;
  cout<<"Sum: "<<sum; 
}