#include <iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	vector<ll> v(n);
	for(int i=0; i<n; i++)
	{
	    cin>>v[i];
	}
    sort(v.rbegin(),v.rend());
    ll ans=0;
    for(int i=0; i<n; i++)
    {   
        v[i]=v[i]-i;
        if(v[i]>=0)
        {
            ans+=v[i];
        }
    }
    cout<<ans<<endl;
    }
	return 0;
}
