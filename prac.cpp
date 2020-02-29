#include <iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> a(n);
        int i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<10;j++)
            {
                if(a[i][j] == '1' && a[i+1][j] == '1')
                {
                    a[i+1][j] = '0';
                }
                else if(a[i][j] == '0' && a[i+1][j] == '0')
                {
                    a[i+1][j] = '0';
                }
                else
                {
                    a[i+1][j] = '1';
                }
            }
        }
        int count = 0;
        for(i=0;i<10;i++)
        {
            if(a[n-1][i] == '1')
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }
	return 0;
}
