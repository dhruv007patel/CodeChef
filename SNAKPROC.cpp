#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,j,t,n,l;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int count=0,flag=0;
		char s[1000];
		cin>>s;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='H')
			{
				count++;
			}
			else if(s[i]=='T')
			{
				count--;
			}
			if(count<0 || count>1)
			{
				flag=1;
				break;
			}
	}

		if(flag==1 ||count!=0)
		{
			cout<<"Invalid"<<endl;
		}
		else
		{
			cout<<"Valid"<<endl;
		}
	}
	return 0;
}
