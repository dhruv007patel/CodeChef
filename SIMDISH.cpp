#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,c;
    cin>>t;
    int  n=4;

    while(t--)
    {
        c=0;
        char s1[4][100],s2[4][100];
        for(int i=0;n>i;i++)
        {
            scanf("%s",&s1[i]);
        }
        for(int i=0;n>i;i++)
        {
            scanf("%s",&s2[i]);
        }
        for(int i=0;n>i;i++)
        {
            for(int j=0;n>j;j++)
            {
                if(strcmp(s1[i],s2[j])==0)
                {
                   c++;
                }
            }
        }

        if(c>=2)
        {
            cout<<"similar\n";
        }
        else
            cout<<"dissimilar\n";

    }
    return 0;
}
