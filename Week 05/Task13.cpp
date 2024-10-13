#include <iostream>
using namespace std;

void timetravel(int hours, int minutes)
 {
   minutes += 15;
   if(minutes >= 60) 
   {  minutes -= 60;      
      hours += 1;
   }
   if(hours >= 24) 
      hours = 0;
   
   cout<<hours<<":"<<minutes;

}
main()
{
  int hours, minutes;
    
  cout<<"Enter Hours: ";
  cin>>hours;
  cout<<"Enter minutes: ";
  cin>>minutes;
  
  timetravel(hours,minutes);  

  
}
