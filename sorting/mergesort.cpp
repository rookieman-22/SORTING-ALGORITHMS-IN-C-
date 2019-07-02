#include<iostream>
using namespace std;
int *divide(int a[],int n)
{
    int i;
    if(n>1)
    {
        int mid=n/2;
        int l=n-mid;
        int r=n-l;
       int left[l],right[r];
       for(i=0;i<l;i++)
       {
           left[i]=a[i];
       }
       cout<<"\n";
       for(i=l;i<n;i++)
       {
           right[i-l]=a[i];
       }
       cout<<"\n";
       divide(left,l);
       divide(right,r);
       i=0;int j=0,k=0;
       while(i<l && j<r)
       {
           if(left[i]<=right[j])
           {
               a[k]=left[i];
               i++;
           }
           else
           {
               a[k]=right[j];
               j++;
           }
           k++;
        }
        while(i<l)
        {
            a[k]=left[i];
            i++;
            k++;
        }
        while(j<r)
        {
            a[k]=right[j];
            j++;
            k++;
        }
     }
     return a;
}
int main()
{
    int n,i;
    cout<<"Enter size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int *b=&a[0];
   b= divide(a,n);
   for(i=0;i<n;i++)
   {
       cout<<*b<<"\t";
       b=b+1;
   }

}
