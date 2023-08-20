#include<iostream>
using namespace std;
void merg(int a[],int lb,int mid,int ub)
{
    int b[ub+1];
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
      while(j<=ub)
      {
        b[k]=a[j];
        j++;
        k++;
      }
    }
    if(j>ub)
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
for(int i=lb;i<=ub;i++)
{
    a[i]=b[i];
}
}

void mergesort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merg(a,lb,mid,ub);
    }

}

void sorted(int a[],int ub)
{
    for(int i=0;i<=ub;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int siz=sizeof(a)/sizeof(a[0]);
    cout<<siz<<"--------------"<<endl;
    mergesort(a,0,siz-1);
    sorted(a,siz-1);
}
