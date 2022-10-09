//Write functions using function overloading to add two numbers having different data types
#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
float add(int,float);
int main()
{
    int a,b,c;
    float x,y,z;
    cout<<"Enter two int values: ";
    cin>>a>>b;
    cout<<"Sum of two int: "<<a<<" + "<<b<<" = "<<add(a,b)<<endl;
    cout<<"Enter two float valuess: ";
    cin>>x>>y;
    cout<<"Sum of two floats: "<<x<<" + "<<y<<" = "<<add(x,y)<<endl;
    cout<<"Enter one int and one float value: ";
    cin>>c>>z;
    cout<<"Sum of one int and one float value: "<<c<<" + "<<z<<" = "<<add(c,z)<<endl;
    return 0;
}
int add(int num1,int num2)
{
    return num1+num2;
}
float add(float num1,float num2)
{
    return num1+num2;
}
float add(int num1,float num2)
{
    return num1+num2;
}