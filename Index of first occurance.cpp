//Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int m=haystack.length();
        for(int i=0;i<m;i++)
        {
            if(haystack.substr(i,n) == needle)
            return i;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    string s,str;
    getline(cin,s);
    getline(cin,str);
    int occurance = solution.strStr(s,str);
    cout << occurance << endl;
    return 0;
}
