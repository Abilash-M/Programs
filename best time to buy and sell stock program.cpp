#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int l=INT_MAX;
        int r=0,profit;
        while(r<prices.size())
            {
                if(l>prices[r])
                {
                    l=prices[r];
                }
                else if(prices[r]-l > maxprofit)
                {
                    maxprofit=prices[r]-l;
                }
                r++;
            }
        return maxprofit;
    }
};


int main()
{
    Solution m;
vector<int> prices = {7,1,5,3,6,4};
int c =m.maxProfit(prices);
cout<<c;
}
