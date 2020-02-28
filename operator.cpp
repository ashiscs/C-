#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i,c=0,d=0,a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]%2==0)
	    {
	        c++;
	    }
	    else
	    {
	        d++;
	    }
	}
	if(c>d)
	{
	    cout<<"READY FOR BATTLE";
	}
	else
	{
	    cout<<"NOT READY";
	}
	return 0;
}
