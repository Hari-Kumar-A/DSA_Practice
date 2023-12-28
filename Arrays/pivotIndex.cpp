class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int leftSum=0;
        for(int i=0;i<n;i++)
        {
            leftSum+=nums[i];
        }

        int rightSum=0;
        int check=0;
        int ans=-1;
        for(int j=n-1;j>=0;j--)
        {
            check=leftSum-rightSum-nums[j];
            if(check==rightSum){
                ans=j; 
            }
            rightSum+=nums[j];
        }
        return ans;
    }
};