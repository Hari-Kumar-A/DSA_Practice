class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector <int> ans;
        bool flag=false;
        int count=0;
        int l=nums.size();
        sort(nums.begin(), nums.end());
         
        if(nums[l-1]!=nums[l-2])
        {
            count++;
            ans.push_back(nums[l-1]);
        }
       
        
        
        if(nums[0]!=nums[1])
        {
            count++;
            ans.push_back(nums[0]);
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i-1]!=nums[i] && nums[i]!=nums[i+1])
            {
                count++;
                ans.push_back(nums[i]);
            }
            if(count==2)
            {
                flag=true;
                break;
            }
        }

        return ans;
    }
};