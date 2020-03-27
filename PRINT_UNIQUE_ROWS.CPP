#include<bits/stdc++.h>
using namespace std;

void printArray(int a[10][10],int row,int col)
{
    int k=1; 
    unordered_set<string> uset;
    cout<<"\nResult\n";
    for(int i = 0; i < row; i++)
    {
        string s = "";
        for(int j = 0; j < col; j++)
        {
            s += to_string(a[i][j]);
        }
       
    
    
    if(uset.count(s) == 0)
    {
        cout<<"Row : "<<k<<" = ";
        k++;
        uset.insert(s);
        cout<<s<<endl;
    }
    }
}

int main()
{
    int row,col;
    cout<<"Enter the value of row and column\n";
    cin>>row>>col;
    
    int a[10][10],i,j;
    
    cout<<"\nEnter the elements of matrix\n";
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cin>>a[i][j];
        }
    }
    
    printArray(a,row,col);
    return 0;
}

/* OUTPUT

Enter the value of row and column                                    
4                                                                    
5                                                                    
                                                                     
Enter the elements of matrix
1 0 1 1 0                                                            
0 1 0 0 1                                                            
1 1 1 0 0   

Result  
Row : 1 = 01001                                                      
Row : 2 = 10110                                                      
Row : 3 = 11100

*/
