#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    int key,c=0;
    cout<<"Enter key to find! : ";
    cin>>key;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<i+1<<", "<<j+1;
                c=1;
            }
        }
    }
    if(c==1)
    {
        cout<<" is the coordinate.";
    }
    else
    {
        cout<<"Key not found";
    }
}