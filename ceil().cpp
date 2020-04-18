// Ceil rounds off the given value to the closest integer which is more than the given value.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x=1.412,y=1.891,z=1.761;
    cout<<ceil(x)<<" "<<ceil(y)<<" "<<ceil(z)<<"\n";
    
    double a=-1.412,b=-1.891,c=-1.761;
    cout<<ceil(a)<<" "<<ceil(b)<<" "<<ceil(c)<<"\n";
    
    return 0;
}

/* OUTPUT

2 2 2                                                                
-1 -1 -1 

*/
