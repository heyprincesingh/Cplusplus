#include<iostream>
using namespace std;

int main()
{
    int r,ch=0,w=0,e=0;
    cout<<"Enter the money you got! ";
    cin>>r;

    ch = w = r;
    while (w!=0)
    {
        ch += w/3;
        e += w%3;
        w = w/3; 
    }
    if(e + w == 3)
    {
        ch += 1;
    }
    cout<<ch;
}