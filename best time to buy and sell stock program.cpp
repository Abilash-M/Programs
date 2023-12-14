//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if()
            mini=min(mini,prices[i]);
            profit=max(profit,prices[i]-mini);
        }
        return profit;
    }
};


int main()
{
    Solution m;
vector<int> prices = {7,1,5,3,6,4};
int c =m.maxProfit(prices);
cout<<c;
}
