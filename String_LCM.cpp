#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        string str1=s1,str2=s2;
        ll n=s1.size();
        ll m=s2.size();
        ll big=max(n,m);
        ll small=min(n,m);
        // cout<<big<<" "<<small;
        if(s1==s2)
        {
            cout<<s1<<endl;
        }
        else{
            if(big%small==0)
            {
                for(ll i=0; i<(big/small)-1; i++)
                {
                    if(small==m) s2=s2+str2;
                    else s1=s1+str1;
                }
                if(s1==s2) cout<<s1<<endl;
                else cout<<-1<<endl;
            }
            else{
                ll res=lcm(big,small);
                for(ll i=0; i<(res/big)-1; i++)
                {
                    if(big==n) s1+=str1;
                    else s2+=str2;
                }
                for(ll i=0; i<(res/small)-1; i++)
                {
                    if(small==m) s2+=str2;
                    else s1+=str1;
                }
                if(s1==s2) cout<<s1<<endl;
                else cout<<-1<<endl;
            }
        }
    }
    return 0;
}