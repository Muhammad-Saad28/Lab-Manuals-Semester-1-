#include<iostream>
using namespace std;

void fuel(int);

main()
{
  int distance;

  cout<<"Enter the distance: ";
  cin>>distance;
  
  fuel(distance);
}

void fuel (int a)
{
  int petrol;

  petrol = a*10;
  cout<<"Fuel needed: "<<petrol; 
}