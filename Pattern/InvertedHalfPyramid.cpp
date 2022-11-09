#include<iostream>
using namespace std;

int main()
{
    int b;
    cout<<"Enter no. of base : ";
    cin>>b;
    for(int i=1;i<=b;b--)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}