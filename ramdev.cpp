#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    long long int l,b,n,L,B,val1,val2,ans=0;
    cin>>l>>b>>n;
    
    for(int i=0; i<n; i++)
    {
       cin>>L>>B;
       val1=(L/l)*(B/b);
       val2=(L/b)*(B/l);
       ans+=max(val1,val2); 
    }
    cout<<ans<<endl;
    return 0;
}
