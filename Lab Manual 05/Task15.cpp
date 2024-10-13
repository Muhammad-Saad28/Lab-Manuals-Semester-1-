#include<iostream>
using namespace std;

void calculatepoolstate(int volume, int pipe1, int pipe2, int hours)
{
  int totalflow =(pipe1+pipe2)/100;
  int full = volume/(totalflow*hours);
  
}
main()
{
 int Volume, Pipe1, Pipe2, Hours;
 cout<<"Enter the volume of pool in liters: ";
 cin>>Volume;
 cout<<"Enter flow rate of first pipe per hour: ";
 cin>>Pipe1;
 cout<<"Enter flow rate of second pipe per hour: ";
 cin>>Pipe2;
 cout<<"Enter hours that the workers were absent: ";
 cin>>Hours; 
 
 string output = calculatepoolstate(Volume,Pipe1,Pipe2,Hours);
 cout<<output;
}