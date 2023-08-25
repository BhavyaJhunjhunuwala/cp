#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> help(n);
        vector<ll> v(n);
        ll count =0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            v[i]=v[i]%2;
            sum+=v[i];
            if(i%2==0)
            {
                help[i]=0;
            }else{
                help[i]=1;
            }
        }
        if(sum!=n/2)
        {
            cout<<-1<<endl;
        }
        else{
        for(int i=0; i<n; i++)
        {
            if(v[i]!=help[i])
            {
                count++;
            }
        }
        if(count%2==1)
        {
            cout<<-1<<endl;
        }else{
            cout<<count/2<<endl;
        }
        }

    }
    return 0;
}