#include<iostream>
using namespace std;

void disc(int, string);

main()
{
  string days; 
  int amount;
  
  cout<<"Enter the Day of purchase: ";
  cin>>days;
  cout<<"Enter the total purchase amount: ";
  cin>>amount;

  disc(amount, days);
}

void  disc (int a, string b)
{
   int discount;
   if(b=="Sunday")
       discount = a-(a*0.10);
       cout<<"Payable amount: "<<discount;
   if(b!="Sunday") 
       cout<<"Payable amount: "<<a;
}