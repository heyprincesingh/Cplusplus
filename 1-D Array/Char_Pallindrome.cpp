#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char word[n+1];
    cin>>word;

    for(int i=0;i<n;i++)
    {
        if(word[i] != word[n-1-i])
        {
            cout<<"Not a pallindrome!";
            return 0;
        }
    }
    cout<<"It is a Pallindrome!";
}