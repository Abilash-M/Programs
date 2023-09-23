/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:*/
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
        return s;
        int cycle=2 * numRows - 2;
        string ans="";
        for(int i=0;i<numRows;i++)
        {
            for(int j=i;j<s.size();j+=cycle)
            {
                ans+=s[j];
                int k=j+cycle-2*i;
                if((i!=0 && i!= numRows-1) && k<s.size())
                ans+=s[k];
            }
        }
        return ans;
    }
};

//cycle=i+numRow*2-2
//j+cycle-2*i

int main() {
    Solution solution;
    string s;
    int numRows;
    cout<<"Enter Number Of Rows";
    cout<<"Enter the string";
    cin>>numRows;
    cin>>s;
    string result = solution.convert(s,numRows);
    cout<<result;

    return 0;
}

