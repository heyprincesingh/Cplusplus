#include<iostream>
using namespace std;

int factorial(int n)
{
    int sum=1;
    while(n>0)
    {
        sum *= n;
        n--;
    }
    return sum;
}

int main()
{
    int n,r,row;
    cout<<"Enter number of rows :";
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int result = factorial(i)/( factorial(j)*factorial(i-j) );
            cout<<result<<" ";
        }
        cout<<endl;
    }   
}