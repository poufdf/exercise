#define _CRT_SECURE_NO_WARNINGS
#include<string>
using namespace std;
//验证回文串
//https://leetcode.cn/problems/valid-palindrome/submissions/755797363/
class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                str.push_back(s[i]);
            }
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                str.push_back(s[i] + 32);
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                str.push_back(s[i]);
            }
        }
        int st = 0;
        int fi = str.size() - 1;
        int find = 1;
        if (str.begin() == str.end())
        {
            return true;
        }
        while (st <= fi)
        {
            if (str[st] != str[fi])
            {
                find = 0;
                break;
            }
            ++st;
            --fi;

        }
        if (find == 1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};