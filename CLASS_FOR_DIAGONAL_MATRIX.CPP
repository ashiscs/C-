// CLASS_FOR_DIAGONAL_MATRIX

#include<iostream>
using namespace std;

class diagonal
{
    private:
    int *a;
    int n;
    
    public:
    diagonal(int n)
    {
        this->n = n;
        a = new int[4];
    }
    
    ~diagonal()
    {
        delete []a;
    }
    
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};

void diagonal::set(int i,int j,int x)
{
    if(i==j)
    {
        a[i] = x;
    }
}

int diagonal::get(int i,int j)
{
    if(i==j)
    {
        return a[i];
    }
    else
    {
        return 0;
    }
}

void diagonal::display()
{
    int i,j;
    cout<<"Resultant matrix is\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<a[i]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    diagonal d(4);
    
    d.set(0,0,1);
    d.set(1,1,2);
    d.set(3,3,8);
    d.set(2,2,6);
    
    cout<<"Element at a[1][1] is "<<d.get(1,1)<<endl;
    d.display();
    
    return 0;
}

/* OUTPUT

Element at a[1][1] is 2                                                                                                                       
Resultant matrix is                                                                                                                           
1 0 0 0                                                                                                                                       
0 2 0 0                                                                                                                                       
0 0 6 0                                                                                                                                       
0 0 0 8

*/
