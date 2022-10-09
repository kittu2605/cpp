//Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int calcPow(int,int);
int main()
{
    int x,y;
    cout<<"Enter x and y:  ";
    cin>>x>>y;
    cout<<x<<" raised to the power "<<y<<" is "<<calcPow(x,y);
    return 0;
}
int calcPow(int num,int pow)
{
    int result=1;
    while(pow>=1)
    {
        result*=num;
        pow--;
    }
    return result;
}