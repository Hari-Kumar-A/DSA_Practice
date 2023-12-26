class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        bool found=false;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                found=true;
                break;

            }
        }

        if(!found){return 1;}
      
            for(int i=0;i<n;i++)
            {
                if(nums[i]<1 || nums[i]>n)
                {
                    nums[i]=1;
                }
            }

            for (int i = 0; i < n; i++)
            {
                nums[(nums[i] - 1) % n] += n;
            }

            for (int i = 0; i < n; i++)
            {
                if (nums[i] <= n)
                {
                    return i + 1;
                }
            }
            return n+1;
        
}

};