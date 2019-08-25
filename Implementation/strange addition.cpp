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
  ll s1,s2,sum=0,a,rev1=0,rev2=0,rev3=0;
  cin>>s1>>s2;
  while(s1>=1)
    {
    a=s1%10;
    rev1=rev1*10+a;
    s1=s1/10;
}
//cout<<rev1<<endl;
while(s2>=1)
    {
    a=s2%10;
    rev2=rev2*10+a;
    s2=s2/10;
}
//cout<<rev2<<endl;
sum=sum+rev1+rev2;
while(sum>=1)
    {
    a=sum%10;
    rev3=rev3*10+a;
    sum=sum/10;
}

cout<<rev3;
    }
  return 0;
}
