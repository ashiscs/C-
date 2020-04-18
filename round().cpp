round() = Rounds given number to the closest integer.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x=1.412,y=1.891,z=1.761;
    cout<<round(x)<<" "<<round(y)<<" "<<round(z)<<"\n";
    
    double a=-1.412,b=-1.891,c=-1.761;
    cout<<round(a)<<" "<<round(b)<<" "<<round(c)<<"\n";
    
    return 0;
}

/* OUTPUT

1 2 2                                                                
-1 -2 -2  

*/
