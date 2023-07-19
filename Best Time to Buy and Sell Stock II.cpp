#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int profit=0;
        while(r<prices.size())
            {
                if(prices[l]>prices[r]);
                else
                {
                    profit=profit + (prices[r]-prices[l]);
                }
                l=r;
                r++;
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
