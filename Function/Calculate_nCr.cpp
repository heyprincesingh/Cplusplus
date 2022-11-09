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
    int n,r;
    cin>>n>>r;
    int result = factorial(n)/( factorial(r)*factorial(n-r) );
    cout<<result;
}