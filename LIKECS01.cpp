#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
	cin>>t;
	while(t--)
    {
        int flag=0;
        string s;
        cin>>s;
        int n=s.length();
        for(int i=0;n>i;i++)
        {
            for(int j=i+1;n>j;j++)
            {
                if(s[i]==s[j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
