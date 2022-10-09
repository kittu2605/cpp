//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
#include<math.h>
using namespace std;
float area(int);
int area(int,int);
float area(int,int,int);

int main()
{
    int radius,len,bre,a,b,c;
    cout<<"Enter radius of triangle: ";
    cin>>radius;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>len>>bre;
    cout<<"Enter sides of triangle";
    cin>>a>>b>>c;
    
    cout<<"Area of circle = "<<area(radius);
    cout<<"Area of rectangle = "<<area(len,bre);
    cout<<"Area of triangle = "<<area(a,b,c);

    return 0;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(int a,int b,int c)
{
    float s;
    s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}