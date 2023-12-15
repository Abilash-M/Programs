//https://leetcode.com/problems/majority-element/

#include <iostream>
#include <vector>
using namespace std;

#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            element=nums[i];
            if(element==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return element;
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int majorityElement = solution.majorityElement(nums);

    cout << "Majority Element: " << majorityElement << endl;

    return 0;
}
