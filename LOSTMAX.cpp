#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int i=0,j,n=0,k=0;
		int a[51];
		char c;
		do
		{

			scanf("%d%c",&a[n],&c);
			n++;

		}while(c!='\n');
		k=n-1;
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
			{
				j=i;
				break;
			}
		}
		k=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>k && i!=j)
			{
				k=a[i];
			}
		}
		cout<<k<<endl;
}
}
