#include<iostream>
using namespace std;

void vote(int);

main()
{
  int age;
 
  cout<<"Enter your age: "<< age;
  cin>>age;
  
  vote(age);
}

void vote(int a)
{
  if(a>=18)
   cout<<"You are eligible to vote";
  if(a<18)
   cout<<"You are not eligible to vote";
}