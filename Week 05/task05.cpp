#include<iostream>
#include<cmath>
using namespace std;

main()
{
 int base, exponent;
 int power;
 
 cout<<"Enter Base: ";
 cin>>base;
 cout<<"Enter exponent: ";
 cin>>exponent;

 power = pow(base,exponent);
 cout<<base<<" raised to the power "<<exponent<<" is: "<<power;
}
