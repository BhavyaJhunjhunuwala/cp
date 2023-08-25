#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll p;
        cin>>p;
        ll count=0;
        while(p>0)
        {
            for(int i=11; i>=0; i--)
            {
                    ll help=pow(2,i);
                if(p/help>=1)
                {
                    if(p%help==0)
                    {
                    count+=(p/pow(2,i));
                    p=p%help;
                    }else{
                        p=p%help;
                        count++;
                    }
                }
                if(p==0) break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
