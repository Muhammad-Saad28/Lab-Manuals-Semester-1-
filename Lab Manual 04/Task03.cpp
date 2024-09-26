#include<iostream>
using namespace std;
 
void add(int, int);

main()
{
  add(2,8);
}

void add(int a, int b)
{
  int sum;
  
  sum= a+b;
  cout<<"Sum: "<<sum;
}