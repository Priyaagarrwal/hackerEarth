#include<iostream>
using namespace std;
int main()
{
int a[10],i,elem,n;
cin>>n;
cout<<"enter an array";
for(i=0;i<n-1;i++)
cin>>a[i];
/*a[i]++;
a[i]==a[i]++;*/
cout<<"enter the new element in an array";
cin>>elem;
for(i=n-1;i<n;i++)
a[i]=elem;
for(i=0;i<n;i++)
cout<<a[i];
return 0;
}























