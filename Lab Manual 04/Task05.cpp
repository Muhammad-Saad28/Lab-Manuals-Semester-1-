#include<iostream>
using namespace std;

void feet(float);

main()
{
  float inches;

  cout<<"Enter the measurement is inches: ";
  cin>>inches;

  feet(inches);

}

void feet(float a)
{
  float feets;
  
  feets = a/12;
  cout<<"Equivalent in feet: "<<feets;
}