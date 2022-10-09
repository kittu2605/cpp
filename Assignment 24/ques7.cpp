//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"sum of "<<a<<" and "<<b<<" is "<<add(a,b);
    cout<<"\nEnter three numbers: ";
    cin>>a>>b>>c;
    cout<<"sum of "<<a<<" , "<<b<<" and "<<c<<" is "<<add(a,b,c);

    return 0;
}
int add(int x,int y,int z)
{
    return x+y+z;
}