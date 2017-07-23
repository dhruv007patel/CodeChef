#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

     int n;
     cin>>n;
     int a[n],c=0;
     for(int i=0;i<n;i++)
        cin>>a[i];
     if(n%2==0)
     {
         cout<<"no\n";
         continue;
     }
     else
     {
         for(int i=0;i<n;i++)
         {
             if(i<=n/2 && a[i]==(i+1))
             c++;
             else if (i>n/2 && a[i]==(n-i))
                c++;
         }
     }
     if(c==n)
        cout<<"yes\n";
        else
            cout<<"no\n";


    }
    return 0;
}
