#include <iostream>
#include <cmath> 
using namespace std;

main() 
{
    float a, b, c, disc, real, imaginary;
    
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;
    
    disc = b * b - 4 * a * c;
    
    if (disc > 0) 
    {
        float root1 = (-b + sqrt(disc)) / (2 * a);
        float root2 = (-b - sqrt(disc)) / (2 * a);
        cout << "The equation has two real and distinct roots: " << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
    else if (disc == 0) 
    {
        float root = -b / (2 * a);
        cout << "The equation has one real root (repeated): " << root << endl;
    }
    else 
    {
        real = -b / (2 * a);
        imaginary = sqrt(-disc) / (2 * a);
        cout << "The equation has two complex roots: " << endl;
        cout << "Root 1: " << real<< " + " << imaginary << "i" << endl;
        cout << "Root 2: " << real<< " - " << imaginary << "i" << endl;
    }
}