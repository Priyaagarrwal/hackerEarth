#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
  ll n,i,k;
  string s;
  cin>>s;
  n=s.length();
  cin>>k;
  for(i=0;i<n;i++)
  {
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
      {
          if(k!=0){
      cout<<char(s[i]+1);
      k--;
      }
      else
        cout<<s[i];
      }
      else{
        cout<<s[i];
      }
  }
  }
  return 0;
}
