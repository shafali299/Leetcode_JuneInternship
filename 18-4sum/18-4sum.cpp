class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int left=j+1;
                int right=n-1;
                while(left<right)
                {
                 long long  int  sum=(long long int)nums[i]+(long long int)nums[j]+(long long int)nums[left]+(long long int)nums[right];
                    if(sum>target)
                    {
                        right--;
                    }
                    else if(sum<target)
                    {
                        left++;
                    }
                    else
                    {
                        res.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while(left+1<right and nums[left]==nums[left+1])
                            left++;
                        while(left<right-1 and nums[right]==nums[right-1])
                            right--;
                        left++;
                        right--;    
                    }
                }
                 while(j+1<n and nums[j]==nums[j+1])
                        j++;
                
            }
             while(i+1<n and nums[i]==nums[i+1])
                        i++;
        }
        return res;
    }
};