#include <iostream>
using namespace  std;

string canbuy(int price, string brand)
{    
    if (brand == "MTJ" && price < 1500) {
        cout<<"You can buy the dress!";
    } else {
        cout<<"You cannot buy the dress";
    }
}

int main() {

    int price;
    string brand;

    cout<<"Enter the brand of the dress: ";
    cin>>brand;
    cout<<"Enter the price of the dress: ";
    cin>> price;

    cout<<canbuy(price, brand);
    return 0;
}