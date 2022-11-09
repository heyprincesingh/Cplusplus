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

        int d=arr[1]-arr[0];
    int count = 2,l=0;
    for(int i=0;i<n-1;i++)
    {
        if(d == arr[i+1]-arr[i])
        {
            count++;
        }
        else
        {
            count = 2;
            d = arr[i+1]-arr[i];
        }
        l = max(count,l);
    }
    cout<<l;
    
/*    int ans= 2, pd =arr[1]-arr[0], j=2,curr=2;
    while(j<n)
    {
        if(pd == arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans;*/
}