#include<iostream>
using namespace std;

void add(int, int);
void sub(int, int);
void mul(int, int);
void divis(float, float);

main()
{
  int num1;
  int num2;
  char op;
  while(true)
  {
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter an operator(+,-,/,*): ";
    cin>>op;
    if(op=='+')
       add(num1, num2);
    if(op=='-')
       sub(num1, num2);
    if(op=='*')
       mul(num1, num2);
    if(op=='/')
       divis(num1, num2);    
  }
}

void add(int a, int b)
{
  int add;

  add = a+b;
  cout<<"Sum: "<<add <<endl;
}

void sub(int a, int b)
{
  int sub;

  sub = a-b;
  cout<<"Subtraction: "<<sub <<endl;
}

void mul(int a, int b)
{
  int pro;

  pro = a*b;
  cout<<"Product: "<<pro <<endl;
}

void divis(float a, float b)
{
  float divi;

  divi = a/b;
  cout<<"Division: "<<divi  <<endl;
}
