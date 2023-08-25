#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        string s,t,help;
        cin>>s>>t;
        help=s;
        reverse(help.begin(),help.end());
        ll str=0, rev=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=t[i]) str++;
            if(s[i]!=t[n-i-1]) rev++;
        }
        if(help==t && s!=t)
        {
            cout<<2<<endl;
        }else{
        if(str%2==0){
             str=2*str;
        }else{
            str=2*str-1;
        }
         if(rev%2==0){
            rev=2*rev-1;
        }else{
            rev=2*rev;
        }
        ll ans;
        if((rev<0 || str<0)){
            ans=(rev<0)?str:rev;
            cout<<ans<<endl;
        }else{
        cout<<min(str,rev)<<endl;
        }
        }
    }
    return 0;
}