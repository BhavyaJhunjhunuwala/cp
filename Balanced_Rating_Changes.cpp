#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n);
    int odd=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2)
        {
            odd++;
        }
    }
    odd=odd/2;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]%2)
        {
            if(odd>0)
            {
                odd--;
                v[i]--;
            }
            else{
                v[i]++;
            }
        }
    }
    for(auto x:v)
    {
        cout<<x/2<<endl;
    }
    
    return 0;
}