class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        vector <int> smaller(n), larger(n);

        smaller[0]=-1;//if that is least element
        int min=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]<=nums[min])
            {
                min=i;
                smaller[i]=-1;
            }
            else
            {
                smaller[i]=min;
            }
        }

        larger[n-1]=-1;//if that is largest element
        int max=n-1;
        for(int i=(n-2);i>=0;i--)
        {
            if(nums[i]>=nums[max])
            {
                max=i;
                larger[i]=-1;
            }
            else
            {
                larger[i]=max;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(smaller[i]!=-1 && larger[i]!=-1)
            {
                return true;
            }
        }
        return false;

    }
};