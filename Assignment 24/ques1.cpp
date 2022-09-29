//Define a function to check whether a given number is a Prime number or not
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,flag=0;
    cout<<"Enter a number:";    
    cin>>num;
    if(num>1)
    {
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
                flag++;
        }
        if(flag!=0)
            cout<<num<<" is not a prime number";
        else 
            cout<<num<<" is a prime number";
    }
    else
        cout<<num<<" is not a prime number";

}