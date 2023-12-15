//https://leetcode.com/problems/pascals-triangle/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> generaterow(int rownum)
    {
        vector<int> row ;
        row.push_back(1);
        int ans=1;
        for(int i=1;i<rownum;i++)
        {
            ans*=rownum-i;
            ans/=i;
            row.push_back(ans);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=1;i<=numRows;i++)
        {

            res.push_back(generaterow(i));
        }
        return res;
    }
};
int main() {
    // Example usage
    Solution solution;
    int numRows = 5;

    vector<vector<int>> result = solution.generate(numRows);

    // Printing the generated Pascal's Triangle
    for (const auto& row : result) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
