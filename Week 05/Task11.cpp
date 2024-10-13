#include<iostream>
using namespace std;

bool symmetrical(int);

main()
{
 int num;

 cout<<"Enter three digit number: ";
 cin>>num;

 if(symmetrical(num)==1)
   cout<<"True";
 else
   cout<<"False";
}

bool symmetrical(int num)
{
 int first, last;
 bool res;
 first = num/100;
 last = num%10;
 res = first==last;
 return res;
}








