#define _CRT_SECURE_NO_WARNINGS
#include<vector>
using namespace std;
//“∆∂Ø¡„
//https://leetcode.cn/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v(nums.size());
        int j = 0;
        int z = 0;
        int n = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                v[j] = nums[i];
                ++j;
                ++n;
            }
            else
            {
                ++z;
            }
        }
        v.resize(n);
        while (z--)
        {
            v.push_back(0);
        }
        nums = v;
    }
};