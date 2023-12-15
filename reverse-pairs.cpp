//https://leetcode.com/problems/reverse-pairs/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>&nums, int lb,int mid,int ub){
    vector<int> b;
    int i=lb,j=mid+1;

        while(i<=mid && j<=ub)
        {
            if(nums[i]<=nums[j])
            {
                b.push_back(nums[i]);
                i++;
            }
            else
            {
                b.push_back(nums[j]);

                j++;
            }


        }

    while(i<=mid)
        {
            b.push_back(nums[i]);
            i++;

        }
            while(j<=ub)
            {
                b.push_back(nums[j]);
                j++;

            }
    for(int i=lb;i<=ub;i++){
        nums[i]=b[i-lb];
    }
}

int countpairs(vector<int>&nums, int lb,int mid,int ub)
{
    int j=mid+1;
    int count=0;
    for(int i=lb;i<mid+1;i++)
    {
        while(j<=ub && (long long)nums[i]>(long long)2*nums[j])j++;
        count+=j-(mid+1);

    }
    return count;
}

int mergesort(vector<int>&a, int lb,int ub)
{
    int cnt=0;
   if(lb>=ub) return cnt;
    int mid=(lb+ub)/2;
    cnt+=mergesort(a,lb,mid);
    cnt+=mergesort(a,mid+1,ub);
    cnt+=countpairs(a,lb,mid,ub);
    merge(a,lb,mid,ub);

    return cnt;
}

    int reversePairs(vector<int>& nums) {
        int n=nums.size();
   return mergesort(nums,0,n-1);
    }
};

int main() {

    Solution solution;
    vector<int> nums = {1, 3, 2, 3, 1};

    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int reversePairs = solution.reversePairs(nums);

    cout << "Number of Reverse Pairs: " << reversePairs << endl;

    return 0;
}
