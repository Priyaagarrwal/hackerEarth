#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    string str;
    cin>>str;
    n=str.length();
    if(str[n-1]=='6')
        cout<<-1;
    else
    {
    for(i=0;i<n;i++)
   {

    if(str[i]!='6')
        count++;
    else{

    }
   }

   cout<<count;}
    return 0;
}
