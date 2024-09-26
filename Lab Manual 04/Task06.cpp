#include<iostream>
using namespace std;

void howmanystickers (int);

main()
{
  int n;
  
  cout<<"Enter the side length of the Rubik's Cube: ";
  cin>>n;

  howmanystickers(n);
}

void howmanystickers(int n)
{
  int stickers;

  stickers = (n*n)*6;
  cout<<"Number of stickers needed: "<<stickers; 
}