class Solution { //leetcode
public:
    void reverseArr(vector<int> &arr)
    {
        int n=arr.size();
        int start=0,end=n-1;
        while(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
     }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //transpose and reverse row wise
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
                    swap(matrix[i][j], matrix[j][i]);
                 
            }
        }
        for(int i=0;i<n;i++)
        {
             reverseArr(matrix[i]);
        }
    }
};