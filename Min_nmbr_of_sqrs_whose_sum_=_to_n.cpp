#include<bits/stdc++.h>
using namespace std;

int getMinSquares(int n)
{
    if(sqrt(n) - floor(sqrt(n)) == 0)
    {
        return 1;
    }
    if(n<=3)
    {
        return n;
    }
    
    int res = n;
    
    for(int i=1; i<=n; i++)
    {
        int temp = i*i;
        if(temp > n)
        {
            break;
        }
        else
        {
            res = min(res, 1 + getMinSquares(n - temp));
        }
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<"\nMinimum number of square(s) required is: "<<getMinSquares(n);
    return 0;
}
----------------------------------------------------------------------------------------------------
/* OUTPUT

Enter the number                                                     
6                                                                    
                                                                     
Minimum number of square(s) required is: 3     

*/
