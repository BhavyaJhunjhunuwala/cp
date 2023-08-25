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
        string s;
        cin>>s;
        vector<char> v;
        v.push_back(s[0]);
        for(ll i=1; i<n; i++)
        {
            if(v[v.size()-1]==s[i] && i+1<=n-1)
            {
                v.push_back(s[i+1]);
                i++;
            }
        }
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}