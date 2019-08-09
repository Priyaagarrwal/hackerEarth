#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;
int main()
{
  ll n,count=0,i,ans=0;
  cin>>n;
string s;
cin>>s;
//s.length();
//ar arr[]={'h','a','c','k','e','r','e','a','r','t','h'};
    for(i=0;i<n;i++)
    {
     if(s[i]=='h' || s[i]=='a'|| s[i]=='c'|| s[i]=='k'||  s[i]=='e'|| s[i]=='r'|| s[i]=='e' ||s[i]=='a'|| s[i]=='r' || s[i]=='t' || s[i]=='h')
      {
         count++;
      }
    }
   //or(i=0;i<n;i++)
   i=0;
   while(i!=n)
    {
        if(count>=i*11)
        {
        ans=i;
        }
        i++;
        }
      cout<<ans<<endl;

     return 0;
}
