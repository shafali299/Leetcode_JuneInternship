class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        
        int n=matrix.size();
        int m=matrix[0].size();
        set<int>r,c;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(matrix[i][j]==0)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(auto it:r)
        {
         for(int i=0;i<m;i++)
         {
             matrix[it][i]=0;
         }
        }
        for(auto itr:c)
        {
            for(int j=0;j<n;j++)
            {
                matrix[j][itr]=0;
            }
        }
        
    }
};