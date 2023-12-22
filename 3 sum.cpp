#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
      sort(nums.begin(),nums.end());
      vector<vector<int>> ans;
      for(int i=0;i<n;i++)
      {
          if(i!=0 && nums[i]==nums[i-1])continue;

          int left=i+1;
          int right=n-1;
          while(right>left)
          {
              int sum=nums[right]+nums[left]+nums[i];
              if(sum==0)
              {
                  ans.push_back({nums[i],nums[left],nums[right]});
                  while(left<right && nums[left]==nums[left+1])left++;
                  while(left<right && nums[right]==nums[right-1])right--;
                  right--;
                  left++;
              }
              else if(sum>0)
              {
                do{right--;}while(left< right && nums[right]==nums[right+1]);
              }
              else if(sum<0)
              {
                do{left++;}while( left<right && nums[left]==nums[left-1]);

              }
          }
      }
      return ans;

    }
};
int main() {
    Solution solution;
    vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>>result=solution.threeSum(nums);

    cout<<"Output"<<endl;
    for (const auto& triplet : result) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }

    return 0;
}
