#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s=0,a[10000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {

    s=a[0]+a[n-1];

}
cout<<s;
return 0;
}
