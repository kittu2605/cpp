//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"Before Swap: a= "<<a<<", b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swap: a= "<<a<<", b= "<<b;
    return 0;
}