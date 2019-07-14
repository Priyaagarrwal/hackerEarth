#include<iostream>
using namespace std;
int merge(int a[],int s,int e)
{
    int mid=(s+e)/2;
    int i=s,count=0;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid&&j<=e)
{
        if(a[i]<a[j])
    {
        temp[k++]=a[i++];
    }
    else
    {
        temp[k++]=a[j++];
       count+=(mid-i+1);
    }
}
while(i<=mid)
{
    temp[k++]=a[i++];

}
while(j<=e)
{

    temp[k++]=a[j++];
}
for(i=0;i<=e;i++)
{
  a[i]=temp[i];
}
return count;
}

int mergesort(int a[],int s,int e)
{
     int count=0;

    if(e>s)
    {
       int mid=(s+e)/2;
   count= mergesort(a,s,mid);
   count+= mergesort(a,mid+1,e);
   count+= merge(a,s,e);
    }
   return count;
}
    int main()
    {
        int a[100],i,n,count;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
      count=mergesort(a,0,n-1);
         //for(i=0;i<n;i++){
            //cout<<a[i];

            cout<<count;

    }

