#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	ll t;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--){
    	ll n,m,i;
    	cin>>n>>m;
    	ll a[n],b[m];
    	for(i=0;i<n;i++)
    		cin>>a[i];
        for(i=0;i<m;i++)
    		cin>>b[i];
        sort(a,a+n);
    	sort(b,b+m);
    	ll j=0,count=0;
    	for(i=0;i<n;i++)
        {
    		for(;j<m && b[j]<a[i];j++);
                if(b[j]==a[i])
                {
                    count++;
                }
    	}
    	cout<<count<<endl;
    }
	return 0;
}
