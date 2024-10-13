#include<iostream>
using namespace std;

void evenorodd(int num)
{
 if(num==0)
   cout<<"Evenish";
 else
   cout<<"Oddish";
}
main()
{
 int d1, d2, d3, d4, d5, sum;
 int num;

 cout<<"Enter a number: ";
 cin>>num;

 d5 = num%10;
 num /=10;
 d4 = num%10;
 num /=10;
 d3 = num%10;
 num /=10;
 d2 = num%10;
 num /=10;
 d1 = num%10;
 sum = (d1+d2+d3+d4+d5)%2;
 
 evenorodd(sum);
}