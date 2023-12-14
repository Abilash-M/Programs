#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countpaths(int i,int j,int m,int n,vector<vector<int>> &dp)
    {
        if(i>=m || j>=n)
        {
            return 0;
        }
        else if(i==m-1 && j==n-1)
        {
            return 1;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        else
        {
            return dp[i][j] =countpaths(i+1,j,m,n,dp)+countpaths(i,j+1,m,n,dp);
        }
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return countpaths(0,0,m,n,dp);
    }
};

int main() {
    Solution solution;
    int m=3;
    int n=7;
    int result=solution.uniquePaths(m, n);
    cout<<"Number of unique paths from (0,0) to ("<<m-1<<","<<n-1<<"):"<<result<< endl;
    return 0;
}
