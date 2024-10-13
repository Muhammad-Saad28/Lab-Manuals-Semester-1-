#include<iostream>
using namespace std;

int discount(string month, string day, int price)
{
    int disc = price;
    if(day == "sunday"|| day == "Sunday")
    {   if(month == "Octuber" ||  month == "octuber" || month == "March" ||  month == "march" ||  month == "August" ||   month == "august")
            disc = price  - (price*0.10);
    }
    if(day == "Monday" || day== "monday")        
    {   if(month == "November" || month == "november" || month == "December" || month == "december")
            disc = price - (price*0.05);
    }
    return disc;        
}

int main()
{
    string month, day;
    int price;
    cout<<"Enter the month: ";
    cin>>month;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<"Enter  price: ";
    cin>>price;

    cout<<"Price: "<<discount(month, day, price);
}