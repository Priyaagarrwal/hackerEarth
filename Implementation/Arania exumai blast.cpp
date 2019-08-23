#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;
int main()
{
  ll i,j,n,count=0;
  string s;
  getline(cin,s);
  n=s.length();
  for(i=0;i<n;i++)
  {
      if(s[i]==s[i+1])
  {
      count++;
  }
  }
  cout<<count;
  return 0;
}
