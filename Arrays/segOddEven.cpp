class Solution { //leetcode
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left=0;
        int n=nums.size();
        int right=n-1;

        while(left<n-1 && right>=0 &&  left<right)
        {
            while(left<n-1 && nums[left]%2==0)
            {
                left++;
            }
          
            while(right>=0 && nums[right]%2!=0)
            {
                right--;
            }

            if(left<n-1 && right >=0 && left<right)
            {
                swap(nums[left],nums[right]);

            }
            left++;
            right--;
        }
        return nums;
    }
};