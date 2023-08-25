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
        vector<ll> v(4);
        ll odd=0; 
        ll even=0;
        for(int i=0; i<4; i++)
        {
            ll a;
            cin>>a; 
            v[i]=a;
        } 
        ll miniele=*min_element(v.begin(),v.begin()+3);  
        for(int i=0; i<4; i++)
        {
            if(v[i]%2) odd++;
        }
        if(odd<=1) cout<<"YES"<<endl;
        else if(miniele!=0)
        {
        for(int i=0; i<3; i++)
        {
            v[i]=v[i]-1;
        }
        v[3]+=3;
        odd=0;
        for(int i=0; i<4; i++)
        {
            if(v[i]%2) odd++;
        }
        if(odd<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}