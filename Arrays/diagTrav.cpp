class Solution {
public:
   vector<int> findDiagonalOrder(vector<vector<int>>& mat) { //leetcode
       
       int n = mat.size();
       int m = mat[0].size();
       vector<int> ans; 

       int row = 0, col = 0; 
       bool up=true;

       while (row<n && col<m) 
       {
           if(up)
           {
               while(row>0 && col<m-1)
               {
                   ans.push_back(mat[row][col]);
                   row--;
                   col++;
               }
               ans.push_back(mat[row][col]);

                if(col==m-1)
                {
                    row++;
                }
                else
                {
                    col++;
                } 
           }
           else
           {
                while(row<n-1 && col>0)
                {
                    ans.push_back(mat[row][col]);
                    row++;
                    col--;
                }
                ans.push_back(mat[row][col]);
                if(row==n-1)
                {
                    col++;
                }
                else
                {
                    row++;
                }
             
           }
           up=!up;
       }
       return ans;
   }
};
