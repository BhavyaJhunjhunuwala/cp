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
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(101,0);
        ll maxi=INT_MIN;
        for(int i=0; i<n; i++){
            ll xa;
            cin>>xa;
            maxi=max(maxi,xa);
            v[xa]++;
        }
        int flag=1;
        for(int i=1; i<=maxi; i++)
        {
            if(v[i]>v[i-1]){
                flag=0;
                break;
            }
        }
        if(flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}