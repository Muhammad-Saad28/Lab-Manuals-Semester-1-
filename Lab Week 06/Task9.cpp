#include<iostream>
using namespace std;

int discount(string month, string day, int price)
{
    int disc =  price;
    if(day == "sunday"|| day == "Sunday" || month == "Octuber" ||  month == "octuber")
    {
            disc = price  - (price*0.10);
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