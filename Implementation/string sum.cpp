#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;

int main()
{
  ll n,i,ans=0,j;
  string s;
  cin>>s;
  n=s.length();
  char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  j=0;
  while(j!=n){
for(i=0;i<=26;i++)
  {
      if(s[j]==arr[i])
      {
          ans=ans+i+1;
    j++;
      }
  }
  }
  cout<<ans;
  return 0;
}


