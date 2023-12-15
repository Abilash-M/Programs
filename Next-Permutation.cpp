//https://leetcode.com/problems/next-permutation/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
         for(int i=n-2;i>=0;i--)
         {
             if(nums[i]<nums[i+1])
             {
                 index=i;
                 break;
             }
         }
         if(index==-1)
         {
             reverse(nums.begin(),nums.end());
             return;
         }
         for(int i=n-1;i>=index;i--)
         {
             if(nums[index]<nums[i])
             {
                 swap(nums[index],nums[i]);
                 break;
             }
         }
        reverse(nums.begin()+index+1,nums.end());
        return;
    }
};
int main() {
    // Example usage
    Solution solution;
    vector<int> nums = {1, 2, 3};

    cout << "Original Permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << std::endl;

    solution.nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << std::endl;

    return 0;
}
