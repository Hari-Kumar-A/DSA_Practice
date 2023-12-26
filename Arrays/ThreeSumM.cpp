class Solution { //three sum with multiplicity leetcode
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n=arr.size();
        long long mod=1e9 +7;
        sort(arr.begin(), arr.end());
        int count=0;
        for(int i=0;i<(n-2);i++)
        {
            int j=i+1;
            int k=n-1;  
            while(j<k)
            {
                int sum=(arr[i]+arr[j]+arr[k]);
                if(sum==target)
                {
                    int count1=1;
                    int count2=1;
                    while(j<k && arr[j]==arr[j+1])
                    {
                        count1++;
                        j++;
                    }
                    while(j<k && arr[k]==arr[k-1])
                    {
                        count2++;
                        k--;
                    }
                    if(j==k)
                    {
            count+= (count1*(count1-1)/2)%mod;
                        count=(count)%mod;
                    }
                    else
                    {
                        count+=(count1%mod*count2%mod)%mod;
                        j++;
                        k--;
                    }
                }
                else if(sum<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            } 
        }
        return count;  
    }
};

//three sum with target =0
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector <vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue; 

            int j=i+1;
            int k=n-1;

            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0)
                {
                    j++;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    vector <int> temp={nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};
