/*nums is the given array and val is the element to be removed*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int itr=0;itr<nums.size();++itr)
        {
            if(nums[itr]==val)
               { nums.erase(nums.begin() + itr);
                itr--;
               }
        }
         nums.shrink_to_fit();
         int k=nums.size();
         return k;
    }
};
