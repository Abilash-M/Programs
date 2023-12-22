//https://leetcode.com/problems/two-sum/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            int t=target-nums[i];
            if(m.count(t)!=0)
            {
                return{m[t],i};
            }
            else{
                m[nums[i]]=i;
            }
        }
        return {};
    }
};
int main() {
    Solution solution;
    vector<int>nums={2, 7, 11, 15};
    int target=9;
    vector<int>result=solution.twoSum(nums,target);

    if(!result.empty()) {
        cout << "output:" << endl;
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "[]" << endl;
    }

    return 0;
}
