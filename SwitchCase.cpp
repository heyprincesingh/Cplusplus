#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter a char : ";
    cin>>a;

    switch (a)
    {
    case 'a':
        cout<<"Hello";
        break;
    case 'b':
        cout<<"Namaste";
        break;
    case 'c':
        cout<<"How are you";
        break;   
    default:
        cout<<"I'm still learing! Sorry";
        break;
    }
}