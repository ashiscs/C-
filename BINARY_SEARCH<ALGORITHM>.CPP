#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1,2,3,4,5};
    
    int key = 20;
    if(binary_search(a.begin(),a.end(),key))
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}

/* OUTPUT

Element not found   

*/
