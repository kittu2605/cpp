//Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
int max(int,int);
float max(float,float);
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two int values: ";
    cin>>a>>b;
    cout<<"Maximum of "<<a<<" and "<<b<<" is "<<max(a,b)<<endl;
    cout<<"Enter two float values: ";
    cin>>x>>y;
    cout<<"Maximum of "<<x<<" and "<<y<<" is "<<max(x,y)<<endl;
    return 0;
}
int max(int a,int b)
{
    int c;
    c=a>b? a:b;
    return c;
}
float max(float a,float b)
{
    float c;
    c=a>b? a:b;
    return c;
}