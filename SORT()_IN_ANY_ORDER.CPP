#include<bits/stdc++.h>
using namespace std;

struct doit
{
    int start,mid,end;
};

bool compareIt(doit a,doit b)
{
    return (a.mid<b.mid);
}

int main()
{
    doit a[4] = {{9,6,3},{3,4,5},{4,5,6},{6,7,8}};
    
    sort(a,a+4,compareIt);
    
    for (int i=0; i<4; i++) {
       cout << "[" << a[i].start << "," << a[i].mid<<","<<a[i].end
            << "] "; 
    }
}

/* OUTPUT

[3,4,5] [4,5,6] [9,6,3] [6,7,8]   

*/
