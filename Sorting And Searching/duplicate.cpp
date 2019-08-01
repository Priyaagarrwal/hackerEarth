
#include<iostream>
using namespace std;
int main()
{
int a[1000],i,j,flag=0,n,count=0;
cout<<"enter no. of elements";
    cin>>n;
cout<<"enter an array";
for(i=0;i<n;i++)
cin>>a[i];
/*cout<<"array is";
for(i=0;i<5;i++)
cout<<a[i]<<"\n";*/
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
flag=1;
cout<<"duplicate element found "<<a[i]<<endl;
count++;
cout<<count;
}
}
}
if(flag==0)
{
cout<<"duplicate element not found";
}
return 0;
}
