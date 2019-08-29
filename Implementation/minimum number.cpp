#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;
ll a[1000005];
int main()
{
    ll t;
    cin>>t;
    while(t--){
 // ll a[1000005];
  ll n,i,k,q;
  cin>>n;
  cin>>k;
  cin>>q;
  for(i=0;i<n;i++)
        cin>>a[i];

   sort(a,a+n);
  if(k==1)
  {
      if(a[n-1]<q){
       cout<<a[n-1]<<endl;}
       else
       cout<<"NO"<<endl;
     }

  else
  {
          if(a[0]<q)
            cout<<a[0]<<endl;
          else
            cout<<"NO"<<endl;

  }
    }
  return 0;
}




