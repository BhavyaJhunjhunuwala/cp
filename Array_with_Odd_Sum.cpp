#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int> v(n);
        ll odd=0,even=0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            if(v[i]%2==1)
            {
                odd++;
            }
            else{
                even++;
            }
        }
        if(sum%2==1)
        {
           cout<<"YES"<<endl; 
        }
        else{
            if(even>0 && odd!=0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}