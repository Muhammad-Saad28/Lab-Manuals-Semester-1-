#include<iostream>
using namespace std;

void printname(string);

main()
{ 
  string name;

  cout<<"Enter your name: ";
  cin>>name;  
   
  printname(name);
}
void printname(string a)
{
   while(true)
     cout<<a <<endl;
}