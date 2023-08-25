#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int res;
    int ans=0;
    int flag=0;
    if(m%n==0)
    {
            res=m/n;
            while(res>1)
            {
                if(res%2==0)
                {
                    res=res/2;
                    ans++;
                }
                else if(res%3==0)
                {
                    res=res/3;
                    ans++;
                }
                else{
                    cout<<-1<<endl;
                    flag=1;
                    break;
                }
        }
        if(flag!=1)
        {
        cout<<ans<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}