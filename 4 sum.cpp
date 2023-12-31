#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<4)return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int k,l;
        for(int i=0;i<n-3;i++)
        {
            if(i!=0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j!=i+1 && nums[j]==nums[j-1])continue;

                k=j+1,l=n-1;
                while(k<l)
                {
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target)
                    {
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        do{k++;}while(k<l && nums[k-1]==nums[k]);
                        do{l--;}while(k<l && nums[l+1]==nums[l]);
                    }
                    else if(sum>target)
                    {
                        l--;
                       // do{l--;}while(k<l && nums[l+1]==nums[l]);
                    }
                    else
                    {
                        k++;
                       // do{k++;}while(k<l && nums[k-1]==nums[k]);
                    }
                }

            }


        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums ={1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> result = solution.fourSum(nums, target);

    cout<<"Quadruplets with the target sum:"<<endl;
    for (const auto& quadruplet : result) {
        cout<<"[";
        for(int num : quadruplet) {
            cout<<num<<",";
        }
        cout<<"]"<<endl;
    }

    return 0;
}
