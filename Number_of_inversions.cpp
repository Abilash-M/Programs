#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>&a, int lb,int mid,int ub){
    vector<int> b;
    int i=lb,j=mid+1;
    int count=0;

        while(i<=mid && j<=ub)
        {
            if(a[i]<=a[j])
            {
                b.push_back(a[i]);
                i++;
            }
            else
            {
                b.push_back(a[j]);

                count+=(mid-i+1);
                j++;
            }


        }

    while(i<=mid)
        {
            b.push_back(a[i]);
            i++;

        }
            while(j<=ub)
            {
                b.push_back(a[j]);
                j++;

            }
    for(int i=lb;i<=ub;i++){
        a[i]=b[i-lb];
    }
    return count;
}

int mergesort(vector<int>&a, int lb,int ub)
{
    int cnt=0;
    if(lb>=ub)
    return cnt;

    int mid=(lb+ub)/2;
    cnt+=mergesort(a,lb,mid);
    cnt+=mergesort(a,mid+1,ub);
    cnt+=merge(a,lb,mid,ub);
    return cnt;

}

int numberOfInversions(vector<int>&a, int n) {
    int cnt=mergesort(a,0,n-1);
    return cnt;
}
int main() {
    vector<int> arr = {5, 3, 2, 4, 1};

    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    int inversions = numberOfInversions(arr, arr.size());

    cout << "\nNumber of inversions: " << inversions << endl;


    return 0;
}
