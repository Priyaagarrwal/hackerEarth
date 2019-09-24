#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;

int main()
{  ll t;
    cin>>t;
    while(t--)
    {
  ll a[100000];
  ll n,r,i,j,count=0,earn;
  cin>>n;
  cin>>r;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  j=0;
  for(i=0;i<n;i++)
  {
      if(a[i]>j)
      {
          count++;
            j=a[i];
      }
  }
  debug(count)
  earn=r*count;
  cout<<earn;
    }
  return 0;
    }





