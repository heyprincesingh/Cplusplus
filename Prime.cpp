#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for( i = 2 ; i < n ; i++ )
    {
        if( n % i == 0 )
        {
          cout<<"Not a Prime number";  
          break;
        }
    }
    if( i == n )
    {
        cout<<"It is a Prime number";
    }
    return 0;
}
