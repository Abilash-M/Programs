/*Given a string s consisting of words and spaces, return the length of the last word in the string. */

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int len=0;
        int flag=0;
        int i=n-1;
        for(;i>=0;i--)
        {
            if(s[i]!=' ')
            {
            len++;
            flag=1;
            }
            if(flag && s[i]==' ')
            break;
        }
        return len;

    }
};
int main() {
    Solution solution;
    string s;
    getline(cin,s);
    int length= solution.lengthOfLastWord(s);
    cout << length << endl;
    return 0;
}
