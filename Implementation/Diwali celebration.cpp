#include <iostream>
using namespace std;
int main()
{
    int t;
cin>>t;
while(t--)
{
    int a,k,n,s=0;
    cin>>a;
    cin>>k;
    cin>>n;
    s=s+a+k*(n-1);
    cout<<s;
}
    return 0;

}
