#include<iostream>
using namespace std;

int main()
{
    int b;
    cout<<"Enter no. of base : ";
    cin>>b;
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}