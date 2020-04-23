#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int i,b,key;
    
    cout<<"Enter key\n";
    cin>>key;
    
    cout<<"Enter elements\n";
    for(i=0;i<5;i++)
    {
        cin>>b;
        a.push_back(b);        
        
    }
    
    if(count(a.begin(),a.end(),key))
    {
        cout<<"Element exist!!";
    }
    else
    {
        cout<<"Element doesn't exist!!";
    }
    return 0;
}

/* OUTPUT

Enter key                                                              
5                                                                      
Enter elements                                                         
1                                                                      
2                                                                      
3                                                                      
4                                                                      
5                                                                      
Element exist!! 

*/
