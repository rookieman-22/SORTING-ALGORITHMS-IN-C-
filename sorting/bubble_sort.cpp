#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
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
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }

    }
    cout<<"The sorted list is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }

}
