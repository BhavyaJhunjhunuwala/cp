#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0; i<n; i++){   
            ll a;
            cin>>a;
            v.push_back(a);
        }
        if(n==1){
            cout<<0<<endl;
        }
        else{
        vector<ll> temp;
        for(int i=0; i<n-1; i++){
            temp.push_back(abs(v[i]-v[i+1]));
        }
        sort(temp.begin(),temp.end());
        for(int i=1; i<k; i++){
            temp.pop_back();
        }
        ll sum=0;
        for(ll i=0; i<temp.size(); i++){
            sum+=temp[i];
        }
        cout<<sum<<endl;
        }
    }

    return 0;
}