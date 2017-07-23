#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c = 0;
        for(int i = 0; i < s.length()-1; i++){
            if(s[i+1] != s[i]){
                c++;
            }
        }
        int ans = c/2;
        if(s[s.length()-1] == s[0]){
            cout<<ans<<"\n";
        }
        else{
            cout<<ans+1<<"\n";
        }
    }
    return 0;
}
