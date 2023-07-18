#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c;
        sort(nums.begin(),nums.end());
        int n=nums.size()/2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+n])
                c=nums[i];
        }
        return c;
    }
};

int main()
{
    Solution m;
vector<int> nums={1,2,2,5,5,5,1,1,5,5,2,5,5,5,5,5,2,1,1,1,5,5};
int c =m.majorityElement(nums);
cout<<c;
}
