#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter a number\n";
    cin>>n;
    while(n!=0)
    {
        n=(n&(n<<1));
        flag++;
    }
    cout<<"Result:"<<flag;
    return 0;
}
