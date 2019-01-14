#include <bits/stdc++.h>
using namespace std;
int mergearray(int a[],int b[],int n1,int n2,int c[])
{
    int i=0,j=0,k=0;
    
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    
    while(i<n1)
    {
        c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++]=b[j++];
    }
    
}

int main()
{
    int a[]={1,2,4,8,10};
    int b[]={4,5,8,11,112};
    
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    int c[n1+n2];

    mergearray(a,b,n1,n2,c);
    int i=0;
    cout<<"Array after merging :  ";
    for(i=0;i<n1+n2;i++)
    cout<<c[i]<<" ";
    return 0;
}
