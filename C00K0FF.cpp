#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;

    while(tt--)
    {
        int n;
        cin>>n;
        int c1=0,c2=0,c3=0,c4=0,c5=0;
        while(n--)
        {
            string s;
            cin>>s;
            if(s=="cakewalk")
                c1=1;
            else if(s=="simple")
                c2=1;
           else if(s=="easy")
                c3=1;
           else if(s=="easy-medium" || s=="medium")
                c4=1;
           else if(s=="medium-hard"|| s=="hard")
                c5=1;
        }
        if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 )
        {
            cout<<"Yes\n";
        }
        else
            cout<<"No\n";
    }
    return 0;
}
