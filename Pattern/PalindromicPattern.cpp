#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=i;
        for(int k=n-1;k>=i;k--)
            {
                cout<<"  ";
            }
        for(int j=1;j<=i;j++,a--)
        {
            cout<<a<<" ";
        }
        for(int j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}