#include<iostream>
using namespace std;

int main()
{
    int money;
    cout<<"Enter your savings :";
    cin>>money;

    if(money>5000)
    {
        cout<<"Can go out for tour";
    }
    else
    {
        cout<<"Can not go out";
    }
    return 0;
}