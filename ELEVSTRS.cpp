#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;

    while(tt--)
    {
        double n,v1,v2;
        cin>>n>>v1>>v2;
        double t1=sqrt(2.0) * n/v1;
        double t2=2 * n/v2;
        if( t1 < t2 )
            cout<<"Stairs\n";
        else
        cout<<"Elevator\n";
    }
    return 0;
}
