#include<iostream>
using namespace std;

int perimeter(char shape, int side)
{
    if(shape=='s'|| shape=='S')
        return 4*side;
    else if(shape =='c' || shape=='C')
            return  6.28*side;
    else if(shape =='t' || shape=='T')
            return 3*side;
    else 
        return 6*side;
}

main()
{
  int side;
  char shape;
  cout<<"Enter  the shape (s for square, c for circle, t for triangle, r for rectangle): ";
  cin>>shape;
  cout<<"Enter the side of the shape: ";
  cin>>side;

  cout<<perimeter(shape, side);
}