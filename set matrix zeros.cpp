//https://leetcode.com/problems/set-matrix-zeroes/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int j1=1;
      for(int i=0;i<m;i++)
      {
          for(int j=0;j<n;j++)
          {
              if(matrix[i][j]==0)
              {
                  if(j==0)
                  {
                      j1=0;
                  }
                  else{
                  matrix[0][j]=0;
                  }
                  matrix[i][0]=0;
              }
          }
      }
      for(int i=1;i<m;i++)
      {
          for(int j=1;j<n;j++)
          {
              if(matrix[0][j]==0 || matrix[i][0]==0)
              {
                  matrix[i][j]=0;
              }
          }
      }
      for(int j=0;j<n;j++)
      {
          if(matrix[0][0]==0)
          {
              matrix[0][j]=0;
          }
      }
      for(int i=0;i<m;i++)
      {
          if(j1==0)
          {
              matrix[i][0]=0;
          }
      }

    }
};

int main() {
    // Example usage
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    solution.setZeroes(matrix);

    cout << "\nMatrix after setting zeroes:" << endl;
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
