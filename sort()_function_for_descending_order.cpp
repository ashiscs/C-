#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[7] = {1,45,9,8,67,76,23};
    
    sort(a,a+7,greater<int>());
    
    cout<<"Resultant array\n";
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

/*OUTPUT

Resultant array                                                                                                                               
76 67 45 23 9 8 1 

*/
