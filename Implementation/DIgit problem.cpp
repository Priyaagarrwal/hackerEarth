#include<iostream>
using namespace std;
int main()
{
  string s;
  long long int k,i;
    cin>>s;
    cin>>k;
    for(i=0;i<k;i++)
    {
        if(s[i]!='9')

        s[i]='9';
       else
       k++;
    }
    cout<<s;

    return 0;
}
