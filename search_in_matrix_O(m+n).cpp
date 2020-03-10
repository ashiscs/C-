// Search in a row wise and column wise sorted matrix
// Below approach for (m x n) matrix

#include<iostream>
using namespace std;

int doit(int a[4][4],int row,int col,int key)
{
    if(row == 0 || col == 0)
    {
        cout<<"Element not found\n";
        return -1;
    }
    int small = a[0][0];
    int large = a[row-1][col-1];
    if(key<small || key>large)
    {
        cout<<"Element not found\n";
        return -1;
    }
    int i = 0,j = col-1;
    while(i<col && j>=0)
    {
        if(a[i][j] == key)
        {
            cout<<"Element found at "<<"("<<i<<", "<<j<<")";
            return 1;
        }
        if(key>a[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout<<"Element not found\n";
    return 0;
}

int main()
{
    int a[4][4],key;
    int i,j;
    cout<<"Enter the elements\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nEnter the key element\n";
    cin>>key;
    doit(a,2,3,key);
    return 0;
}
