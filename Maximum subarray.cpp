//https://leetcode.com/problems/maximum-subarray/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long int sum=0;
        long long int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};
int main() {
    // Example usage
    Solution solution;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int result = solution.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
