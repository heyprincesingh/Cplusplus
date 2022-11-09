#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int a[26];
    cin>>n;

    for(int i=0;i<26;i++){
        a[i] = 0;
    }

    for(int i=0;i<n.length();i++){
        a[n[i]-'a']++;
    }

    int mx=a[0];
    for(int i=0;i<26;i++){
        if(a[i]>mx)
          mx = a[i];
    }
    cout<<mx;
}