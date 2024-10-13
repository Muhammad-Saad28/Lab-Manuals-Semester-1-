#include<iostream>
#include<cmath>
using namespace std;

float hight(float, float); 

main()
{
 float distance, height, angle;
 
 cout<<"Enter angle of elevation: ";
 cin>>angle;
 cout<<"Enter distance from the base of tree: ";
 cin>>distance;
 
 height= hight(distance, angle);
 cout<<"Height of the tree is: "<<height;
}

float hight(float dis, float angle)
{
 float result= tan(angle/57.2958)*dis;
 return result;
}