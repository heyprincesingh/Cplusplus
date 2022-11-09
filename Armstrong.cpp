#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b = 0;
    cin>>a;
    int copy = a;
    while( a != 0 )
    {
        b = b + pow( a % 10 , 3 );
        a = a / 10;
    }
    if(copy == b)
    {
        cout<<"It is a Armstrong number";
    }
    else
    {
        cout<<"It is not a Armstrong number";
    }
}
