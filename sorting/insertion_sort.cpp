#include<iostream>
using namespace std;
int main()
{
    int n,i,hole;
    cout<<"Enter elements of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        hole=i;
        while(hole>0 && a[hole]<a[hole-1])
        {
            int temp=a[hole];
            a[hole]=a[hole-1];
            a[hole-1]=temp;
            hole=hole-1;
        }
    }
    cout<<"The sorted list is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }

}
