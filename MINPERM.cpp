#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;n>i;i++)
        a[i]=i+1;
        if(n%2==0)
        {
            for(int i=0,j=1;n>i;j+=2,i+=2)
            {
                swap(a[i],a[j]);
            }
            for(int i=0;n>i;i++)
            cout<<a[i]<<" ";
        }
        if(n%2!=0 )
        {
            for(int i=0;n-3>i;i+=2)
            {
                swap(a[i],a[i+1]);
            }
            if(n!=3)
            for(int i=0;n-3>i;i++)
                cout<<a[i]<<" ";
            cout<<a[n-2]<<" "<<a[n-1]<<" "<<a[n-3];
        }
    cout<<endl;
}
    return 0;
}
