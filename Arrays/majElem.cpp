class Solution { //leetcodetouc
public:
    int majorityElement(vector<int>& nums) {
        //moore-voting algorithm
        int n=nums.size(); 
        int trackElem=nums[0];
        int count=1; 
        for(int i=1;i<n;i++)
        {
           if(count==0) trackElem=nums[i];

            if(nums[i]==trackElem) count++;
            else count--;

        }
        return trackElem;
    }
};