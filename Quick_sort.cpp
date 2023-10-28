#include<iostream>
using namespace std;

int partition_(int arr[],int lb,int ub)
{
    int end=ub,start=lb;
    int pivot=arr[lb];
    while(end>start)
    {
        while(arr[start]<=pivot)
            start++;
        while(arr[end]>pivot)
            end--;
        if(start<end)
            swap(arr[start],arr[end]);

    }
    swap(arr[lb],arr[end]);
    return end;
}


void quicksort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc = partition_(arr,lb,ub);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);
    }

}

void disp(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={6,1,2,8,3,4,7,10};
    quicksort(arr,0,7);
    disp(arr,8);

}




