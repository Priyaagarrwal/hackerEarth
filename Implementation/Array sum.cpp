#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int a[100000];
 long long int i,n,sum=0;
 cin>>n;
 for(i=0;i<n;i++)
    cin>>a[i];
 for(i=0;i<n;i++)
 {
     sum=sum+a[i];
 }
   cout<<sum;
   return 0;
}

