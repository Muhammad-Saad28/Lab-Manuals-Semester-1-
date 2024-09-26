#include<iostream>
using namespace std;

void evenodd (int);

main()
{
  int num;

  cout<<"Enter a number: ";
  cin>>num;

  evenodd(num);
}

void evenodd (int a)
{
  if (a%2==0)
       cout<<"Number "<<a<<" is even";
  if(a%2!=0)
       cout<<"Number "<<a<<" is odd";
}