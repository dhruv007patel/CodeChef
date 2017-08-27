#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(t--)
    {
        long long int a[1000];
        int b[1000]={0};
        long long int p=0;
        for(int i='a';'z'>=i;i++)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;
        for(int i=0;s.length()>i;i++)
        {
            b[s[i]]=1;
        }
        for(int i='a';'z'>=i;i++)s
