#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    int uniquePaths(int m, int n) {
    int N=m+n-2;
    int r=m-1;
    double ans=1;
    for(int i=1;i<=r;i++)
    {
        ans=(ans*(N-r+i))/i;
    }
    return int(ans);
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
