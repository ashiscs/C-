// trunc() = Trunc rounds, removes digits after decimal point.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x=1.412,y=1.891,z=1.761;
    cout<<trunc(x)<<" "<<trunc(y)<<" "<<trunc(z)<<"\n";
    
    double a=-1.412,b=-1.891,c=-1.761;
    cout<<trunc(a)<<" "<<trunc(b)<<" "<<trunc(c)<<"\n";
    
    return 0;
}

/* OUTPUT

1 1 1                                                                
-1 -1 -1  

*/
