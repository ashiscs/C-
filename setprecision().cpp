// setprecision() = Setprecision when used along with ‘fixed’ provides precision to floating point numbers correct to decimal numbers mentioned in the brackets of the setprecison.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x=3.14159,y=-3.14159;
    
    cout<<fixed<<setprecision(0)<<x<<" "<<y<<"\n";
    cout<<fixed<<setprecision(1)<<x<<" "<<y<<"\n";
    cout<<fixed<<setprecision(2)<<x<<" "<<y<<"\n";
    cout<<fixed<<setprecision(3)<<x<<" "<<y<<"\n";
    cout<<fixed<<setprecision(4)<<x<<" "<<y<<"\n";
    cout<<fixed<<setprecision(5)<<x<<" "<<y<<"\n";
    cout<<fixed<<setprecision(6)<<x<<" "<<y<<"\n";
    
    return 0;
}

/* OUTPUT

3 -3                                                                   
3.1 -3.1                                                               
3.14 -3.14                                                             
3.142 -3.142                                                           
3.1416 -3.1416                                                         
3.14159 -3.14159                                                       
3.141590 -3.141590 

*/
