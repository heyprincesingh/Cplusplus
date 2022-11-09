#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int count=0,key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]<key)
        {
            count++;
        }
    }
    cout<<count;
}