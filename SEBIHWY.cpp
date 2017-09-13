#include<bits/stdc++.h>

using namespace std;

int main()
{
    double c,b,t,m,n,S,SG,FG,D,T;
    cin>>t;
    while(t--)
    {
        cin>>S>>SG>>FG>>D>>T;
        c=(D*50*3600)/(T*1000);
        b=S+c;
        if(b>SG)
            m=b-SG;
        else
            m=SG-b;
        if(b>FG)
            n=b-FG;
        else
            n=FG-b;
        if(m<n)
            cout<<"SEBI"<<endl;
        else if(n<m)
            cout<<"FATHER"<<endl;
        else
            cout<<"DRAW"<<endl;
    }
}
