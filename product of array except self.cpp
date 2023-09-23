//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> answer(n);
        vector<int> left(n);
        vector<int> right(n);
        left[0]=1;
        right[n-1]=1;
        for(int i=1;i<n;i++)
        {
            left[i]=left[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
        answer[i]=left[i]*right[i];
    }
    return answer;
    }
};

int main() {
    Solution solution;
    vector<int>nums={1,2,3,4};
    vector<int>result=solution.productExceptSelf(nums);

    cout << "Input array: ";
    for (int num : nums) {
        cout<<num<<" ";
    }
    cout<<endl;

    cout<<"Product of all elements except self: ";
    for(int num : result) {
        cout<<num<< " ";
    }
    cout<<endl;
    return 0;
}
