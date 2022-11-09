#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;

    //Linear Search
    int i = 0,j = m-1;
    bool found = false;
    while(i<n && j>= 0)
    {
        if(a[i][j]==key)
            {
                found = true;
            }
        if(a[i][j]>key)
            {
                j--;
            }
        else
            {
                i++;
            }
    }
    if(found)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
}