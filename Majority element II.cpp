//https://leetcode.com/problems/majority-element/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int element1=INT_MIN,element2=INT_MIN,count1=0,count2=0;
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(count1==0 && element2!=nums[i])
            {
                element1=nums[i];
                count1=1;
            }
            else if(count2==0 && element1!=nums[i])
            {
                element2=nums[i];
                count2=1;
            }
            else if(nums[i]==element1)
            {
                count1++;
            }
            else if(nums[i]== element2)
            {
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==element1)count1++;
            else if(nums[i]==element2)count2++;
        }
        if(count1>n/3)ans.push_back(element1);
        if(count2>n/3)ans.push_back(element2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main() {
    Solution solution;
    vector<int>nums={3,3,2,2,1,1,1,2};
    vector<int>result=solution.majorityElement(nums);
    cout << "Majority elements: ";
    for(int num:result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
