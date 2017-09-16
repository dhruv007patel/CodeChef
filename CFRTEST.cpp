#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
		int n,x,count=0;
		cin>>n;
		int d[101]={0};
		while(n--)
        {
			cin>>x;
			d[x]++;
		}
		for(int i=0;100>=i;i++)
            if(d[i]!=0)
                count++;

		cout<<count<<endl;
	}
	return 0;
}
