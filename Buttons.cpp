#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int res=n;
    for(int i=1; i<n; i++)
    {
        res+=(n-i)*i;
    }
    cout<<res;
    return 0;
}