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
      int a[n];
      int min=0;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[min]>a[i])
          min=i;
      }
      cout<<min+1<<endl;
  }
    return 0;
}

