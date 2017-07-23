#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(int i=0;500>=i;i++)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
                c++;
                if(c==n)
                    break;
            }
        }
        cout<<endl;
    }
    return 0;
}
