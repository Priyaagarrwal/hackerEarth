#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;

int main()
{
  ll p,s,t,h,x,c1=0,c2=0,cost1=0,cost2=0,tc=0;
  cin>>p>>s>>t>>h>>x;
    for(x=1;x<=7;x++)
  {
      if(s<=t)
      {
          c1++;
          p=h;
          cost1=p*c1;
          s--;

      }
      else
      {
       c2++;
       cost2=p*c2;
       s--;
      }
  }
  tc=cost1+cost2;
  cout<<tc;
  return 0;
}
