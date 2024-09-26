#include<iostream>
using namespace std;

void add();

main()
{ 
  add();
}

void add()
{
  int num1;
  int num2;
  int sum;
  
  cout<<"Enter Number 1: ";
  cin>>num1;
  cout<<"Enter Number 2: ";
  cin>>num2;

  sum = num1+num2;
  cout<<"Sum: "<<sum;
}