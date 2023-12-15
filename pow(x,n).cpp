//https://leetcode.com/problems/powx-n/

#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long N=abs(n);
        double ans=1;
        while(N)
        {
            if(N%2)
            {
                ans=ans*x;
                N-=1;
            }
            else
            {
                x=x*x;
                N/=2;
            }
        }
        if(n<0)
        {
            ans=(double)1.0/(double)ans;
        }
        return ans;
}
};

int main() {
    // Example usage
    Solution solution;
    double x = 2.0;
    int n = -3;

    cout << "Result: " << solution.myPow(x, n) << endl;

    return 0;
}
