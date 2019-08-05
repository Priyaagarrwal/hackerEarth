#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
  ll b=0,k=0,i,n;
  string s;
  cin>>s;
  n=s.length();
  for(i=0;i<n;i++)
  {
      if(s[i]=='L')
      {
          b--;
      }
      if(s[i]=='R')
      {
          b++;
      }
      if(s[i]=='D')
      {
          k--;
      }
      if(s[i]=='U')
      {
          k++;
      }
  }
  cout<<b<<" "<<k;
  return 0;
}

