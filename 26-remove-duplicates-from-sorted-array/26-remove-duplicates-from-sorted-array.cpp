class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        //vector<int>res;
        int c=0,i;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[c++]=nums[i];
            }
            
        }
        nums[c]=nums[i];
       
        return c+1;
    }
};