#include<iostream>
using namespace std;

string grater(int a, int b, int c)
{
    if(a>b && a>c)
        return to_string(a);
    else if(b>a && b>c)
        return  to_string(b);
    else 
        return  to_string(c);

}

main()
{
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    cout<<grater(a, b, c)<<endl;
}