#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];

    cin.getline(a, n);
    cin.ignore();

    int i=0;
    int cur = 0, mx = 0;
    int st =0, maxst=0;

    while(1)
    {
        if(a[i] == ' ' || a[i] == '\0')
        {
            if(cur > mx)
            {
                mx = cur;
                maxst = st;
            }
            cur = 0;
            st = i+1;
        }
        else
        {
            cur++;
        }
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }

    cout<<mx<<endl;
    for(int i=0;i<mx;i++)
    {
        cout<<a[i+maxst];
    }
}