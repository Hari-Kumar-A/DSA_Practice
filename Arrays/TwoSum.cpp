class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {//leetcode
        long long n=nums.size();
        vector <int> ans;
        
        vector <pair<int, int>> p;
        for(int i=0;i<n;i++)
        {
            p.push_back(make_pair(nums[i],i));
        }
        sort(p.begin(), p.end());
        //binary search
        int i=0;
        int j=n-1;
        int sum=0;
        while(i<j)
        {
            sum=p[i].first+p[j].first;
           if(sum==target)
           {
               ans.push_back(p[i].second);
               ans.push_back(p[j].second);
               break;  
           } 
           else if(sum<target)
           {
               i++;
           }
           else
           {
               j--;
           }
        } return ans;
    }
         
};

