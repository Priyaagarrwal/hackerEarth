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
  ll a[100000];
  int i,n,count=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
 //best= max(best,a);
 sort(a,a+n);
  /*for(i=0;i<n;i++)
  {
      cout<<a[i];
  }*/
 // cout<<a[0]<<endl;
  for(i=0;i<n;i++)
  {
      if(a[i]==a[0])
      {
          count++;
      }
  }
 // cout<<count<<endl;
  if(count%2==0)
  {
      cout<<"unlucky";
  }
  else
  {
      cout<<"lucky";
  }
    }
  return 0;

}
