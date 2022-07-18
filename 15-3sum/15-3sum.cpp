class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
          sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {

                int left=i+1;
                int right=n-1;
                while(left<right)
                {
                 long long  int  sum=(long long int)nums[i]+(long long int)nums[left]+(long long int)nums[right];
                    if(sum>0)
                    {
                        right--;
                    }
                    else if(sum<0)
                    {
                        left++;
                    }
                    else
                    {
                        res.push_back({nums[i],nums[left],nums[right]});
                        while(left+1<right and nums[left]==nums[left+1])
                            left++;
                        while(left<right-1 and nums[right]==nums[right-1])
                            right--;
                        left++;
                        right--;    
                    }
            
                
            }
             while(i+1<n and nums[i]==nums[i+1])
                        i++;
        }
        return res;
    }
};