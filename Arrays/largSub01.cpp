class Solution {
public:
    int findMaxLength(vector<int>& nums) { //leetcode
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                nums[i]=-1;
            }
        }
        //convert all 0 to -1

        int maxlen=0;

        int sum=0;
        map <int,int> mp;
        
        for(int i=0;i<n;i++)
        { 
            sum+=nums[i];
            if(sum==0) maxlen=max(maxlen,i+1);

            if(mp.find(sum)==mp.end())//not present
            {
                mp.insert({sum,i});//sum and index
            } 

            int req=sum;//req
            
            if(mp.find(req)!=mp.end())//if req present
            {
                maxlen=max(maxlen,i-mp[req]);
            } 
        }
        return maxlen;
    }
};