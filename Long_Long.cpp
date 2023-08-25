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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        ll summ1=0,k=0;
        ll help=0;
        for(int i=0; i<n; i++)
        {
           if(v[i]<=0)
           {
                if(v[i]<0) k=1;
           }else{
            if(k==1) help++;
            k=0;
           }
            summ1+=abs(v[i]);
        }
        if(k==1) help++;
        cout<<summ1<<" "<<help<<endl;
    }
    return 0;
}