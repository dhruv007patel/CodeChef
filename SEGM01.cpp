#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        string s;
        cin>>s;
        for(int i=0;s.length()>i;i++)
        {
            if(s[i]=='1' && s[i-1]!='1')
                count++;
            if(count==2)
                break;
        }
        if(count==1)
            cout<<"YES"<<endl;
    }
	return 0;
}
