#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;

int main()
{
  ll n;
  string s;
  cin>>s;
  n=s.length();
  ll l=0,h=n-1;
  while(h>l)
  {
      if(s[l++]!=s[h--])
      {
          cout<<n;
          return -1;
      }

  }
 cout<<n-1;
 return 0;
}
