#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	int len,k,a;
	    for(int i=0;i<t;i++)
        {
	        cin>>len>>k;
	        cin>>a;
	        // main code goes here
            if(k%2!=0)
			{
                for(int j=0;j<len;j++)
                {
                    if(a[j]==1)
					{
                    a[j]==0;
                    if(a[j]==1 && a[j-1]==0)
					{
                        a[j-1]==1;
                    }
                    if(a[j]==1 && a[j+1]==0)
					{
                        a[j+1]==1;
                	}
                    
                	}
            	}
	    	}
		}
	return 0;
}
