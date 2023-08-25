#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    string str;
    cin>>str;
    ll nb,ns,nc;
    cin>>nb>>ns>>nc;
    ll pb,ps,pc;
    cin>>pb>>ps>>pc;
    ll r;
    cin>>r;
    ll b=0, s=0, c=0; 
    for(ll i=0; i<str.size(); i++)
    {
        if(str[i]=='B') b++;
        else if(str[i]=='S') s++;
        else c++;
    }
      ll low=0, high=r+200;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            ll z=0;
            ll r1=max(b*mid-nb,z);
            ll r2=max(s*mid-ns,z);
            ll r3=max(c*mid-nc,z);
            ll price=r1*pb+r2*ps+r3*pc;
            if(price<=r) low=mid+1;
            else high=mid-1;
        }
        cout<<high;
    return 0;
}