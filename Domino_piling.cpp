#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll m,n;
    cin>>m>>n;
         ll val1=m/2*n/1;
        ll val2=m/1*n/2;
        cout<<max(val1,val2)<<endl;
    return 0;
}