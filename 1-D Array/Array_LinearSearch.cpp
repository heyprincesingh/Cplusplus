#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;
    
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            cout<<"Match found at : "<<i;
            break;
        }
    }
    if(i == n)
    {
        cout<<"Match not found!";
    }
}