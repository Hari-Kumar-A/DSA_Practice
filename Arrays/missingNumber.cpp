class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans=*(nums.end()-1)+1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return ans;
    }
};