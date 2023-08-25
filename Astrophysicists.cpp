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
    while(t--)
    {
        ll n,k,g,help;
        cin>>n>>k>>g;
        help=g;
        if(k*g<n) 
        {
            cout<<k*g<<endl;
        }else{
            vector<ll> v(n,0);
            ll sum=0;
            for(int i=0; i<n; i++)
            {
                g--;
                if(i==n-1){
                    v[i]=k*help-sum;
                }else{
                v[i]=g;
                }
                sum+=v[i];
                if(g==0 || sum==k*help){
                    break;
                }
            }
            ll ans=0;
            for(int i=0; i<n; i++)
            {
                ans=ans+(v[i])%help;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}