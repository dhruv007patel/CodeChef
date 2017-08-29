#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, flag1=0, flag2=0;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n-1; i++)
        {
            if(a[i]+1!=a[i+1])
                flag1=1;
        }
        sort(a, a+n);
        for(i=0; i<n-1; i++)
        {
            if(a[i]+1!=a[i+1])
                flag2=1;
        }
        if(flag1==1 && flag2==0 && a[0]==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
