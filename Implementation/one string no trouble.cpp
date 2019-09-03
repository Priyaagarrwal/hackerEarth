#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str;
 int i,count=1,maxi=1;
    cin>>str;
    int n=str.length();
 for(i=1;i<n;i++){
    if(str[i]!=str[i-1])
    {
    count++;
 }
 else{
    maxi=max(count,maxi);
    count=1;
 }
    }
    maxi=max(count,maxi);
   // return maxi;
cout<<maxi;
return 0;
}

