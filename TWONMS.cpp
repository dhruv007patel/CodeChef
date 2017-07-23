#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;

      int l=0;
    if(n &1 )
        {
            l=max(a*2,b)/min(a*2,b);
        }
    else
        l=max(a,b)/min(a,b);

        cout<<l<<endl;

    }


    return 0;
}
