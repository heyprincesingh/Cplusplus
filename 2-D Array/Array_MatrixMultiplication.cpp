#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int a1[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>a1[i][j];
        }
    }
    int c,d;
    cin>>c>>d;
    int a2[c][d];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            cin>>a2[i][j];
        }
    }

    if(b==c)
    {
        int n[a][d];
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                n[i][j]=0;
            }
        }
        //Multiplication
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                for(int k=0; k<b; k++)
                {
                    n[i][j] += (a1[i][k] * a2[k][j]);
                }
            }
        }

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
        {
            cout<<n[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else
    {
        cout<<"Matrix Multiplication is not possible";
    }
}