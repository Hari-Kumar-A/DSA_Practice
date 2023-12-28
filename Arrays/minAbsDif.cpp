class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        int minDif=INT_MAX;
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for(int i=0;i<n-1;i++)
        {
            int x=abs(arr[i+1]-arr[i]);
            if(x<minDif)
            {
                minDif=x;
            } 
        }

        for(int i=0;i<n-1;i++)
        {
            if(minDif==abs(arr[i+1]-arr[i]))
            {
                vector<int> temp={arr[i],arr[i+1]};
                ans.push_back(temp);
            }
        }
        return ans;

    }
};