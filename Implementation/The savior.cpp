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
  ll a[1000];
  ll i,n,j,s=0,count=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(a[i]!=a[j])
        {
        s=s+a[i]+a[j];
    if(s%2==0)
        {
        count++;
    }
    s=0;
    }
    }
    }
    cout<<count<<endl;
  }
    return 0;
}
