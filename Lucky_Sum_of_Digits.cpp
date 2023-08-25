#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n<4)
    {
        cout<<-1<<endl;
        return 0;
    }
    string ans="";
    for(int i=0; i<=25*10000; i++)
    {
            if((n-4*i)>=0 &&(n-4*i)%7==0)
            {
                for(int j=0; j<i; j++)
                {
                    ans+="4";
                }
                for(int j=0; j<(n-4*i)/7; j++)
                {
                    ans+="7";
                }
                cout<<ans<<endl;
                return 0;
            }       
    }
    cout<<-1<<endl;

    return 0;
}