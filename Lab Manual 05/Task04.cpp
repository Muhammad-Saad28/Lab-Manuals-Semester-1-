#include<iostream>
using namespace std;

int min(int, int);

main()
{
 int n1, n2, res;

 cout<<"Enter number 1: ";
 cin>>n1;

 cout<<"Enter number 2: ";
 cin>>n2;

 res = min(n1,n2);
 cout<<"Minimum is: "<<res;
}

int min(int a, int b)
{
  if(a>b)
	return b;
  else 
	return a;
}