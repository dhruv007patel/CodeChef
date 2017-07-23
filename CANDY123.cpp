#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,s1=0,s2=0;
        cin>>a>>b;

     for(int i=1,j=2;;j+=2,i+=2)
     {
         s1=s1+i;
         s2=s2+j;
         if(s1>a)
         {
             cout<<"Bob\n";
             break;
         }
        if(s2>b)
         {
            cout<<"Limark\n";
            break;
         }
     }

    }
    return 0;
}
