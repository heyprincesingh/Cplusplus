#include<iostream>
using namespace std;

void factorial(int n)
{
    int sum=1;
    while(n>0)
    {
        sum *= n;
        n--;
    }
    cout<<sum;
    return;
}

int main()
{
    int n;
    cin>>n;

    factorial(n);
}