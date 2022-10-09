//Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int highDigit(int);
int main()
{
    int num;
    cout<<"Enter a number:  ";
    cin>>num;
    cout<<"Highest value digit in "<<num<<" is "<<highDigit(num);
    return 0;
}
int highDigit(int num)
{
    int high=0,rem;
    while(num>0)
    {
        rem=num%10;
        if(rem>high)
            high=rem;
        num/=10;
    }
    return high;
}