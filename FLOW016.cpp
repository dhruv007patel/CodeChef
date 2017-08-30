#include<bits/stdc++.h>

using namespace std;

int main()
{

    long n,n1, n2, gcd, temp, lcm;
    cin>>n;
    while(n--)
    {
        cin >> n1 >> n2;
        gcd = n1;
        temp = n2;
        while(gcd != temp)
        {
            if(gcd > temp)
            gcd -= temp;
        else
            temp -= gcd;
        }
        lcm  = (n1 * n2) / gcd;
        cout << gcd<<" "<< lcm<<"\n";
    }
    return 0;
}


