#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(c) cout << #c << " = " << c << endl;

int main()
{
     ll t,n;
   cin>>t;
   while(t--){
   cin>>n;
  string s;
  cin>>s;
  int i,count=0,ans=0;
 // n=s.length();
for(i=0;i<n;i++){
if(s[i]=='0'|| s[i]== '1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')

 {
     count++;
     if(count==1){

   // count++;
    ans++;
     }
 }
 else
  count=0;

  }

  cout<<ans;}
  return 0;
}

