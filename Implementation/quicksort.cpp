#include<iostream>
using namespace std;
int partition(int a[],int s,int e)
{
   int n;
   int i=s-1;
   int j=s;
   int pivot=a[e];
   for( ;j<=e;j++)
   {
       if(a[j]<pivot)
       {
           i++;
           swap(a[i],a[j]);
       }
   }
   swap(a[i+1],a[e]);
   return i+1;
}
void quicksort(int a[],int s,int e)
{


    if(s>=e)
    {
        return;
    }
  int p= partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
    }
int main()
{
  int a[100],n,i;
  cin>>n;
  for(i=0;i<n;i++)
        cin>>a[i];
  quicksort(a,0,n-1);
   for(i=0;i<n;i++)
        cout<<a[i];
        return 0;
}
