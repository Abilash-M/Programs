/*given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        map<int, string> mp;
        int wc=1;
        int n=s.length();
        string ans="";
        string temp="";
        int flag =0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
            temp+= s[i];
            flag=1;

            }
            if((s[i]==' ' || i==n-1) && flag)
            {
                mp[wc++]=temp;
                temp.clear();
                flag=0;
            }
        }
        while(--wc)
        {
            ans+=mp[wc] + " ";
        }
        ans.pop_back();
        return ans;
    }
};

int main() {
    Solution solution;
    string s;
    getline(cin,s);
    string reversed = solution.reverseWords(s);
    cout << reversed << endl;
    return 0;
}
