#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int idx;
        ll mini = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            if (mini > abs(v[i] - v[i - 1]))
            {
                idx = i;
                mini = abs(v[i] - v[i - 1]);
            }
        }
        if (n == 2)
        {
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
            cout << endl;
        }
        else
        {
            for (int i = idx; i < n; i++)
                cout << v[i] << " ";
            for (int i = 0; i < idx; i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
    return 0;
}