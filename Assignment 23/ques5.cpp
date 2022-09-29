//Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    float l,b,h,volume;
    cout<<"Enter length, breadth & heigth of cuboid: ";
    cin>>l>>b>>h;
    volume=l*b*h;
    cout<<"Vpoume of cuboid = "<<volume;
    return 0;
}