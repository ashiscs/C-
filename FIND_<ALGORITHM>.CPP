#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1,2,3,4,5};
    int i,key;
    
    cout<<"Enter key\n";
    cin>>key;
    
    if(find(a.begin(),a.end(),key) != a.end())
    {
        cout<<"Element Found !!";
    }
    else
    {
        cout<<"Element not found!!";
    }
    return 0;
}

/* OUTPUT

Enter key                                                              
4                                                                      
Element Found !! 

*/
