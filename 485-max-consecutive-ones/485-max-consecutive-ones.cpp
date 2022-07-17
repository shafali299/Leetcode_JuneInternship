class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int res=0,c=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
                c++;
            else
            {
                res=max(c,res);
                c=0;
            }
        }
        res=max(c,res);
        return res;
        
    }
};