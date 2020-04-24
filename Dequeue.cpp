#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> a;
    int i;
    
    a.push_back(1);
    a.push_back(2);
    a.push_front(3);
    a.push_front(4);
    
    cout<<"Inserted Elements are\n";
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    a.pop_back();
    a.pop_front();
    
    cout<<"Updated Elemente are\n";
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    // To check whether dequeue is empty or not
    
    if(a.empty())
    {
        cout<<"Dequeue is empty"<<"\n";
    }
    else
    {
        cout<<"Dequeue is not empty"<<"\n";
    }
    
    
    return 0;
}

/* OUTPUT

Inserted Elements are                                                
4 3 1 2                                                              
Updated Elemente are                                                 
3 1                                                                  
Dequeue is not empty 

*/
