#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s[4];
    int p[4];
    while(t!=0)
    {
        t--;
        int a=0,b=0,c=0,d=0;
        for(int i=0;4>=i;i++)
        {
            cin>>s[i];
            cin>>p[i];
        }
         for(int i=0;4>i;i++)
         {

             if(s[i]=="Barcelona")
             {
                a=p[i];
             }
             if(s[i]=="RealMadrid")
             {
                b=p[i];
             }
             if(s[i]=="Eibar")
             {
                c=p[i];
             }
             if(s[i]=="Malaga")
             {
                d=p[i];
             }
         }
         if( d>b && a>b )
             {
                 cout<<"Barcelona"<<endl;
             }
             else
                cout<<"RealMadrid"<<endl;
    }

    return 0;
}
