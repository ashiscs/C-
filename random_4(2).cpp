#include <bits/stdc++.h>
using namespace std;

int conv(int d)
{
    int cnt = 0;
    int e = 0;
    while(d != 0)
    {
        int rem = d % 2;
        int c = pow(10,cnt);
        e += rem * c;
        d = d/2;
        
        cnt++;
    }
    return e;
    
}

// global variables

    int even =0;
	int odd = 0;
	int r,t,n,q,i,j,p[100000];
	int k = 0;

int main() {
	// your code goes here
	//int t;
	cin>>t;
	while(t--)
	{
	    //long long int n,q;
	    cin>>n>>q;
	    if((t*(n+q)) <= 4000000)
	    {
	    long long int a[n],b[n];
	    
	    //int i,j,p[100000];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<q;i++)
	    {
	        cin>>p[i];
	    }
	    //int k=0;
	    for(j=0;j<q;j++)
	    {
	    for(i=0;i<n;i++)
	    {
	        b[k] = p[j] ^ a[i];
	        k++;
	    }
	    }
	    //cout<<k;
	    //for(i=0;i<k;i++)
	    //{
	    //   cout<<b[i]<<" ";
	   // }
	   // cout<<endl;
	    //int d;
	    for(i=0;i<k;i++)
	    {
	        //d = b[i];
	        b[i] = conv(b[i]);
	    }
	    //for(i=0;i<k;i++)
	    //{
	      //  cout<<b[i]<<" ";
	    //}
	    //cout<<endl;
	    int count;
	    for(i=0;i<k;i++)
	    {
	        count = 0;
	        while(b[i] > 0)
	        {
	            r = b[i]%10;
	            if(r == 1)
	            {
	                count++;
	            }
	            b[i] = b[i] / 10;
	            
	        }
	        if(count%2 == 0)
	        {
	            even++;
	        }
	        else
	        {
	            odd++;
	        }
	    }
	    cout<<even<<" "<<odd<<endl;
	    
	}
	}
	return 0;
}
