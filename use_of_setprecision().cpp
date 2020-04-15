// USE OF SETPRECISION()

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double sal;
        cin>>sal;
        double hra,da;
        if(sal<1500)
        {
            hra = (0.10)*sal;
            da = (0.90)*sal;
        }
        else if(sal>=1500)
        {
            hra = 500;
            da = (0.98)*sal;
        }
        else
        {
            continue;
        }
        double gross = sal+hra+da;
        cout<<fixed<<setprecision(2)<<gross<<endl;
    }
    return 0;
}

/* OUTPUT
1                                                                      
10042                                                                  
20383.16
*/
