#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int row=-n; row<=n; row++)
    {
        int space=2*abs(row);
        for(int i=0; i<space; i++)
        {
            cout<<" ";
        }
        int max=n-abs(row);
        for(int i=0; i<max; i++) cout<<i<<" ";
        for(int i=max; i>0; i--) cout<<i<<" ";
        cout<<0<<endl;
    }
    return 0;
}