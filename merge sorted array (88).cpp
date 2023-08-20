#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> b;
        int i=0,j=0;
        while(i < m && j < n)
        {
            if(nums1[i]<=nums2[j]){
            b.push_back(nums1[i]);
            i++;
            }
            else
            {
                b.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)
        {
            b.push_back(nums1[i]);
            i++;
        }
        while(j<n)
        {
            b.push_back(nums2[j]);
            j++;
        }
        /*for(i=0;i<b.size();i++)
        {
            nums1[i]=b[i];
        }*/
        nums1.clear();
        nums1=b;
for(int i=0;i<nums1.size();i++)
    {
        cout<<endl<<nums1[i]<<"\t";
    }
    }

};

int main()
{
    Solution V;
    int m,n;
    cout<<"Enter number of elements of first array:";
    cin>>m;
    cout<<endl<<"Enter number of elements of second array:";
    cin>>n;
    vector<int> nums1;
    vector<int> nums2;
    cout<<"Enter elements of first array  in ascending order:";
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        nums1.push_back(temp);
    }
    cout<<endl<<"Enter elements of second array  in ascending order:";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        nums2.push_back(temp);
    }
      V.merge(nums1, m, nums2, n);

}
