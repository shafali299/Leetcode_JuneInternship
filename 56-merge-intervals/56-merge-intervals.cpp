class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(intervals[j][1]>=intervals[i][0])
            {
                intervals[j][1]=max(intervals[i][1],intervals[j][1]);
                intervals[j][0]=min(intervals[j][0],intervals[i][0]);
            }
            else
            {
                j++;
                intervals[j]=intervals[i];
            }
        }
        intervals.resize(j+1);
        return intervals;
    }
};