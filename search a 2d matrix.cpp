//https://leetcode.com/problems/search-a-2d-matrix/


#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
                 int m=matrix.size();
         int n=matrix[0].size();
         int low=0,high=m*n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };
    int target = 5;

    cout << "Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    bool result = solution.searchMatrix(matrix, target);

    cout << "Target " << (result ? "found" : "not found") << " in the matrix." << endl;

    return 0;
}
