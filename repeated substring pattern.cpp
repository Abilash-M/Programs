//Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str;
        int n=s.length();

            for(int j=1;j<=n/2;j++)
            {
                if(n%j==0)
                {
                    str=s.substr(0,j);
                    string ne="";
                    int r=n/j;
                for(int k=0;k<r;k++)
                {
                    ne+=str;
                }

                if(ne == s){

                return 1;
                }
                }
            }
        return 0;
    }
};
int main() {
    Solution solution;
    string s;
    getline(cin,s);
    bool result = solution.repeatedSubstringPattern(s);

    if (result) {
        cout << "The string can be formed by repeating a substring." << endl;
    } else {
        cout << "The string cannot be formed by repeating a substring." << endl;
    }
    return 0;
}
