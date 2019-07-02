
#include<iostream>
using namespace std;
int main()
{
    int n,i,imin,j;
    cout<<"Enter elements of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for(i=0;i<n;i++)
   {
       imin=i;
       for(j=i+1;j<n;j++)
       {
           if(a[j]<a[imin])
            imin=j;
       }
       int temp=a[i];
       a[i]=a[imin];
       a[imin]=temp;
   }

    cout<<"The sorted list is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }

}
