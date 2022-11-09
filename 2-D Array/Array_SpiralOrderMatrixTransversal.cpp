#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int row_str = 0, row_end = a-1, col_str = 0, col_end = b-1;

    while(row_str <= row_end && col_str <= col_end)
    {
        //for row_str
        for(int col = col_str; col <= col_end; col++)
        {
            cout<<arr[row_str][col]<<" ";
        }
        row_str++;

        //for col_end
        for(int row = row_str; row <= row_end; row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        //for row_end
        for(int col = col_end; col >= col_str; col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //for col_str
        for(int row = row_end; row>= row_str; row--)
        {
            cout<<arr[row][col_str]<<" ";
        }
        col_str++;
    }
}