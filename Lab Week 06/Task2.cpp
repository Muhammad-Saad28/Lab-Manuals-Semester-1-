#include<iostream>
using namespace std;

bool grater(int a, int b)
{
    if(a>b)
        return 1;
    else 
        return 0;
}

main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<grater(a,b)<<endl;
}