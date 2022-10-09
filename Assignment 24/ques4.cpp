//Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int comb(int,int);
int fact(int);
void printPascalTri(int);
int main()
{
    int n;
    cout<<"Enter lines of Pascal triangle";
    cin>>n;
    printPascalTri(n);
    return 0;
}
void printPascalTri(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int space=n-1;space>i;space--)
            cout<<" ";
        for(int j=0;j<=i;j++)
            {
                cout<<comb(i,j)<<" ";
            }
        cout<<endl;
    }
}
int comb(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
int fact(int n)
{
    if(n<0)
        return 1;
    if(n==1||n==0)
        return 1;
    return n*fact(n-1);
}