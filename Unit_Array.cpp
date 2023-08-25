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
        vector<int> v(n);
        int a=0,b=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==1) a++;
            else if(v[i]==-1) b++;
        }
        if(a>b && b%2==0) cout<<0<<endl;
        else if(a==b && b%2==1) cout<<1<<endl;
        else{
            int cnt=0;
            while(b>a){
                b--;
                a++;
                cnt++;
            }
            if(b%2==0)cout<<cnt<<endl;
            else cout<<cnt+1<<endl;
        }
    }
    return 0;
}