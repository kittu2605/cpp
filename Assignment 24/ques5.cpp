//Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int checkFib(int);
int main()
{
    int num;
    cout<<"Enter a number:  ";
    cin>>num;
    if(checkFib(num)==1)
        cout<<num<<" is a term in Fibonacci ";
    else
        cout<<num<<" is not a term in Fibonacci ";
    return 0;
}
int checkFib(int num)
{
    int a=0,b=1,c,flag=0;
    if(num==0||num==1)
        return 1;
    for(int i=2; ;i++)
    {
        c=a+b;
        if(num==c)
        {
            flag ++;
            break;
        }
        else if(num<c)
            break;
        a=b;
        b=c;
    }
    return flag;
}