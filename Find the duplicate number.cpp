//https://leetcode.com/problems/find-the-duplicate-number/

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[0];

        do{
            slow=nums[slow];
            fast=nums[nums[fast]];

        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
    return slow;
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<int> nums = {1, 3, 4, 2, 2};

    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int duplicate = solution.findDuplicate(nums);

    cout << "Duplicate Element: " << duplicate << endl;

    return 0;
}
