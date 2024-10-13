#include<iostream>
using namespace std;

string ones(int);
string elevens(int);
string tens(int);

main()
{
 int num;
 
 cout<<"Enter 2 digit number: ";
 cin>>num;
 string a = ones(num);
 string b = elevens(num);
 string c = tens(num);
 if(num<10)
   cout<<a;
 if(num<20)
   cout<<b;
 if(num>20)
 {
  cout<<c;
  cout<<a;
 }

}

string ones(int a)
{
 a = a%10;
 if(a==1)
   return "One";
 if(a==2)
   return "Two";
 if(a==3)
   return "Three";
 if(a==4)
   return "Four";
 if(a==5)
   return "Five";
 if(a==6)
   return "Six";
 if(a==7)
   return "seven";
 if(a==8)
   return "Eight";
 if(a==9)
   return "Nine";
 if(a==0)
   return"";
}

string elevens(int a)
{
 a = a/10;
 if(a==10)
    return "Ten";
 if(a==11)
   return "Eleven";
 if(a==12)
   return "Twelve";
 if(a==13)
   return "Thirteen";
 if(a==14)
   return "Fourteen";
 if(a==15)
   return "Fifteen";
 if(a==16)
   return "Sixteen";
 if(a==17)
   return "seventeen";
 if(a==18)
   return "Eighteen";
 if(a==19)
   return "Nineteen";
 if(a==0)
   return"";
}

string tens(int a)
{
 a = a/10;
 if(a==2)
   return "Twenty";
 if(a==3)
   return "Thirty";
 if(a==4)
   return "Forty";
 if(a==5)
   return "Fifty";
 if(a==6)
   return "Sixty";
 if(a==7)
   return "Seventy";
 if(a==8)
   return "Eighty";
 if(a==9)
   return "Ninety";
}