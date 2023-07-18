#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Rotate {
public:
    void rotate(vector<int>& nums, int k) {
            reverse(nums.begin()+(nums.size()-k),nums.end());
            reverse(nums.begin(),nums.end()-k);
            reverse(nums.begin(),nums.end());
            }
};


int main()
{
    Rotate m;
vector<int> nums={1,2,3,4,5,6,7,8,9,10};
int k;
cin>>k;
m.rotate(nums,k);
for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<" ";
}
