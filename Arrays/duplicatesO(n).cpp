class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) { // range from 1 to N only so using indexing negative 
    //leetcode
        int n=nums.size();
        vector <int> ans;
        for(int i=0;i<n;i++)
        {
            int index=abs(nums[i])-1;
            if(nums[index]>0)
            {
                nums[index]*=-1;
            }
            else
            {
                ans.push_back(index+1);
            }
             
        }
         
        return ans;
    }
};