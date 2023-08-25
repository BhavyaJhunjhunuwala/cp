#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<string, int> mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    
    int n;
    cin>>n;
    int count=0;
    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        if(mp.find(str)!=mp.end())
        {
            count+=mp[str];
        }
    }
    cout<<count<<endl;
    return 0;
}