#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;

int main()
{
    ll t;
    cin>>t;
    while(t--){
  ll n,i,count=0;
  string s;
  cin>>s;
  n=s.length();
  ll arr[26]={0};
  for(i=0;i<n;i++)
  {
      arr[s[i]-'a']++;
  }
  for(i=0;i<26;i++)
    {
        if(arr[i]>=1)
        {
            count++;


        }
    }
  if(count&1)
    cout<<"Player1"<<endl;
  else
    cout<<"Player2"<<endl;
    }
  return 0;
}

