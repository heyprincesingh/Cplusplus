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

    int rec = 0,mx=-1;
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1] && a[i]>mx)
        {
            rec++;
            mx = max(mx,a[i]);
        }
    }
    cout<<rec;
}