
#include<iostream>
#include<bits/stdc++.h>

#define pi 3.141592653589793

#define ll long long  

using namespace std;


void soloution()
{
  ll a,b;
  cin>>a>>b;
  if((a==1 && b==2) || (b==1 && a==2)) 
  cout<<"Yes"<<"\n";
  else if(a==1 || b==1)
  {
      cout<<"No"<<"\n";
  }
  else if (!(a%2) || !(b%2))
  {
      cout<<"Yes"<<endl;
  }
  else
  {
      cout<<"No"<<endl;
  }
}

int main()
{
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