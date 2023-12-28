class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) { //leetcode
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        int index=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<m;j++)
            {
                count+=mat[i][j];
                if(count>ans)
                {
                    ans=count; 
                    index=i;
                }
                
            }
        }
        vector <int> answer={index,ans};
        return answer;
         
    }
};