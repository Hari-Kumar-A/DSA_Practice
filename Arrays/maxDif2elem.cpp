class Solution {//Brute force leetcode like best time to sell and buy
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size(); 
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int buy=nums[i];
            int sell=0;
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]>sell) sell=nums[j];
            }
            if((sell-buy)>ans) ans=sell-buy; 
        }
        if(ans!=0){return ans;}
        else{return -1;} 
    }
};

class Solution {//optimal
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size(); 
        int minBuy=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]<minBuy) minBuy=nums[i];
            ans=max(ans,nums[i]-minBuy);
        } 
        if(ans!=0) return ans;
        else{return -1;}
    }
};