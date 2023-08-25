#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(2*n);
        for(int i=0; i<2*n; i++)
        {
            cin>>v[i];
        } 
        sort(v.begin(),v.end());
        int he=(v.size()/2)-1;
        cout<<abs(v[he+1]-v[he])<<endl;
    }
    return 0;
}