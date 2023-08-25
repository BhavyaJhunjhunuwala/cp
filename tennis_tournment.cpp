
#include<iostream>
#include<bits/stdc++.h>

#define pi 3.141592653589793

#define ll long long  

using namespace std;

void soloution()
{
      int n;
      cin>>n;
      if(n%2==0)
      {
        cout<<"NO"<<endl;
      }
      else
      {
        cout<<"YES"<<"\n";
        string str="0";
        for(int i=0; i<n/2; ++i)
        {
           str+='1';
        }
        for(int i=0; i<n/2; ++i)
        {
           str+='0';
        }
        for(int i=0; i<n; ++i)
        {
            for(int k=n-i; k<n; ++k)
            {
             cout<<str[k];
            }
            for(int j=0; j<n-i; ++j)
            {
             cout<<str[j];
            }
            cout<<"\n";
        }

      }
}

int main()
{
#ifdef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   ll t;
   cin>>t;
    while(t--)
    {
       soloution();
    }
    return 0;
}







/*#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    stack<int> s;
    s.push(n);
    cout<<"number="<<s.top();
	return 0;
} */