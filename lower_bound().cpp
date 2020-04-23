//#include<iostream>
//#include<algorithm>
//#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[8] = {10,20,30,30,20,10,10,20},i;
    vector<int> b;
    
    for(i=0;i<8;i++)
    {
        b.push_back(a[i]);
    }
    
    sort(b.begin(),b.end());
    cout<<"Sorted Vector is\n";
    for(i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    vector<int>::iterator c,d;
    c = lower_bound(b.begin(),b.end(),20);
    d = upper_bound(b.begin(),b.end(),30);
    
    cout<<"\nLower-Bound "<< (c-b.begin()) <<endl;
    cout<<"\nUpper-Bound "<< (d-b.begin()) <<endl;
  
     return 0;
    
}

/* OUTPUT

Sorted Vector is                                                     
10 10 10 20 20 20 30 30                                              
Lower-Bound 3                                                        
                                                                     
Upper-Bound 8 

*/
