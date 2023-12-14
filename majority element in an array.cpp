//https://leetcode.com/problems/majority-element/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
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

int main()
{
    Solution m;
vector<int> nums={1,2,2,5,5,5,1,1,5,5,2,5,5,5,5,5,2,1,1,1,5,5};
int c =m.majorityElement(nums);
cout<<c;
}
