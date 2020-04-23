#include<bits/stdc++.h>
using namespace std;

struct compare
{
    int key;
    compare(int const &i): key(i) {}
    
    bool operator()(int const &i)
    {
        return (i==key);
    }
};

int main()
{
    vector<int> a = {1,2,3,4,5};
    
    int key = 6;
    if(find_if(a.begin(),a.end(),compare(key)) != a.end())
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
