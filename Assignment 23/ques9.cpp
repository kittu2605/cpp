//Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    num1>num2?cout<<num1<<" is maximum":cout<<num2<<" is maximum";
    return 0;
}