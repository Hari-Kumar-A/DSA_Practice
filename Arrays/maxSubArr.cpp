class Solution {
public:
    int maxProduct(vector<int>& nums) { //leetcode
        int n=nums.size();
        int ans=INT_MIN; 
        int pdt=1;
        for(int i=0;i<n;i++)
        {
            pdt*=nums[i];
            ans=max(ans,pdt);

            if(pdt==0)
            {
                pdt=1;
            }
        }
        pdt=1;
        for(int i=n-1;i>=0;i--)
        {
            pdt*=nums[i];
            ans=max(ans,pdt);

            if(pdt==0)
            {
                pdt=1;
            }
        }
        return ans;
        
    }
};