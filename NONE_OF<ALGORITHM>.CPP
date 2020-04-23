#include<bits/stdc++.h>
using namespace std;

struct compare
{
    int key;
    compare(int const &i): key(i){}
    
    bool operator()(int const &i)
    {
        return (i==key);
    }
};

int main()
{
    vector<int> a = {1,2,3,4,5};
    
    int key = 2;
    if(none_of(a.begin(),a.end(),compare(key)))
    {
        cout<<"Element not Found";
    }
    else
    {
        cout<<"Element found";
    }
    return 0;
}

/* OUTPUT

Element found 

*/
