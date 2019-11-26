#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;

int main()
{
  ll a[100000];
  ll b[100000],i,n,k,j,best=0,result=0,sum=0;
  cin>>n;
  cin>>k;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  //sort(a,a+n);
  for(i=0;i<n-k+1;i++)
  {
 for( j=i;j<k+i;j++)
 {
     sum+=a[j];
     best=max(best,sum);
 }
    cout<<best<<" ";
   result=max(result,best);
   best=0;
   sum=0;
  }

  cout<<endl;
  cout<<result<<endl;

  return 0;
}
