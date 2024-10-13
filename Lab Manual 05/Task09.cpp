#include<iostream>
using namespace std;

int product(int);

main()
{
 int num;
 int res;

 cout<<"Enter a number: ";
 cin>>num;

 res = product(num);
 cout<<"Result: "<<res;
}

int product(int a)
{
 return a*5;
}