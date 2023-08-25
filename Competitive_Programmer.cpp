#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        ll sum=0,even=0;
        bool zero=false;
        for(ll i=0; i<str.length(); i++)
        {
            ll x=str[i]-'0';
            if(x==0) zero=true;
            if(x%2==0) even++;
            sum+=x;
        }
        if(zero && sum%3==0 && even>1)
        {
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }

    }
    return 0;
}