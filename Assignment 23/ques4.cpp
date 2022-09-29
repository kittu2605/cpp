//Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    int radius;
    float area;
    cout<<"Enter radius of circle";
    cin>>radius;
    area=(22/7.0)*radius*radius;
    cout<<"Area of a circle"<<area;
    return 0;
}