#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int z=0;
        for(int i=0;i<nums.size();i++)
        {
            z=z^nums[i];
        }
        return z;
    }
};

int main()
{
    return 0;
}