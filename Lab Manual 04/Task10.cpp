#include<iostream>
using namespace std;

void results (int);

main()
{
  int marks;

  cout<<"Enter your score: ";
  cin>>marks;

  results(marks);
}

void results(int a)
{
  if(a>50)
     cout<<"PASS";
  if(a<50)
     cout<<"FAIL";
}