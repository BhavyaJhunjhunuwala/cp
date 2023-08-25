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
         ll n, m; 
         cin >> n >> m;

        for(ll i = 0; i < n; ++i) 
        {
            for(ll j = 0; j < m; ++j) 
            {
                if(i % 2 == 0) 
                {
                    cout << (n / 2 + i / 2) * m + j + 1 << ' ';
                }
                else 
                {
                    cout << (i / 2) * m + j + 1 << ' ';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}