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
    ll a[100000],i,n,k,p,count=0;
    cin>>n;
    cin>>k;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
   sort(a,a+n);
   for(i=0;i<n;i++)
{
       if(a[i]>=k)
    {
           for(i=0;i<n;i++)
       {
            if(a[i]>=k)
           {
           count++;
           }
       }
    }
   // debug(count)
   // debug(n)
       if(count==n)
       {
          cout<<'0'<<endl;
           break;

       }
}
   for(i=0;i<n;i++)
{
       if(a[i]<k)
    {

        p=k-a[i];
        cout<<abs(p)<<endl;
        for(i=0;i<n;i++)
       {

          a[i]=a[i]+p;

       }
    }
}

}
        return 0;
    }






