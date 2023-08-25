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
        string l,r,help;;
        cin>>l>>r;
        if(r.size()<l.size())
        {
            help=l;
            l=r;
            r=help;
        }
        if(l.size()<r.size()){
            while(l.size()!=r.size()){
                    l=l+'0';
            }
            reverse(l.begin(),l.end());
        }
    ll ans=0;
    for(int i=0; i<l.size(); i++){
        if(r[i]!=l[i]){
            ans=ans+abs(l[i]-r[i])+(l.size()-i-1)*9;
            break;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}