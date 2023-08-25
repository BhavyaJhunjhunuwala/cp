#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<ll> v(4);
    for(int i=0; i<4; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2]<<endl;
    return 0;
}