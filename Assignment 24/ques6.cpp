//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter two numbers:  ";
    cin>>a>>b;
    cout<<"Before swap:  a= "<<a<<", b= "<<b;
    swap(a,b);
    cout<<"\nAfter swap:  a= "<<a<<", b= "<<b;
    
    return 0;
}
void swap(int &p, int &q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}