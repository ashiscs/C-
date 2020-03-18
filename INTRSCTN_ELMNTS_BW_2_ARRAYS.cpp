#include<iostream>
using namespace std;

int main()
{
    int a[10],b[10],i,j,n;
    cout<<"Enter the elements\n";
    cin>>n;
    cout<<"Enter the elements of array a\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter the elements of array b\n";
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int cnt;
    for(i=0;i<n;i++)
    {
        cnt = 0;
        for(j=0;j<n;j++) {
        if(a[i] == b[j] && cnt<1)
        {
            cnt++;
            cout<<a[i]<<" ";
        }
        }
    }
    return 0;
}
