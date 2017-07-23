#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(y1==y2)
        {
            (x1>x2)?(cout<<"left"<<endl):(cout<<"right"<<endl);
        }
        else
            if(x1==x2)
        {
            (y1>y2)?(cout<<"down"<<endl):(cout<<"up"<<endl);
        }
        else
                cout<<"sad"<<endl;
    }
    return 0;
}
