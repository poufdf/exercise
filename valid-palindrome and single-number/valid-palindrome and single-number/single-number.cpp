#define _CRT_SECURE_NO_WARNINGS
#include<vector>
using namespace std;
//只出现一次的数字
//https://leetcode.cn/problems/single-number/description/
//优雅的解法
//题目已经给了暗示，一个元素只出现了一次，其余元素都只出现两次
//任何数和0异或都是自己，任何数和自己异或都是0，异或支持交换率
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = 0;
        for (auto& x : nums)
        {
            val ^= x;//4 ^ 1 ^ 2 ^ 1 ^ 2 == 4 ^ (1^1) ^ (2^2)   
        }
        return val;
    }
};











//自己写的暴力解法(只能侥幸通过)
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        vector<int> v;
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (nums[i] < 0)
//            {
//                v.resize(100000);
//            }
//            if (v.size() <= nums[i])
//            {
//                v.resize(v.size() == 0 ? nums[i] + 1 : v.size() + nums[i]);
//            }
//            if (nums[i] < 0)
//            {
//                ++v[nums[i] + 50000];
//            }
//            else
//            {
//                ++v[nums[i]];
//            }
//
//
//        }
//        int find = -1;
//        for (int i = 0; i < v.size(); ++i)
//        {
//            if (v[i] == 1)
//            {
//                find = i;
//                break;
//            }
//        }
//        if (find > 30000)
//        {
//            return find - 50000;
//        }
//        else
//        {
//            return find;
//        }
//
//    }
//};
