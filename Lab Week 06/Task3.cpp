#include<iostream>
using namespace std;

bool evenorodd(int a)
{
    int d1, d2, d3;
    d3=a%10;
    d2 = a/10;
    d2%=10;
    d1=a/100;
    if((d1+d2+d3)%2==0)
        return 1;
    else 
        return 0;
}

main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<evenorodd(a);   
}