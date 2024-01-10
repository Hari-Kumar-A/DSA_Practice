class Solution {
public: //leetcode
    void reverseArr(vector <int>&nums, int l, int r)
    {
        while(l<r)
        {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int limit=n-k%n;
       reverseArr(nums,0,limit-1);
       reverseArr(nums, limit,n-1);
       reverseArr(nums, 0,n-1); 
    }
};