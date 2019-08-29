#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;
int main()
{ ll t;
  cin>>t;
  while(t--){
  ll a[100000],b[100000];
  ll i,n,s1=0,s2=0;
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  for(i=0;i<n;i++)
  cin>>b[i];
  sort(a,a+n);
  sort(b,b+n);
  s1=a[n-1];
  s2=b[n-1];
   if(s1==s2)
    cout<<"Tie"<<endl;
   else if(s1>s2)
    cout<<"Bob"<<endl;
   else if(s2>s1)
    cout<<"Alice"<<endl;


  }
   //cout<<b[i];}
   return 0;
  }




