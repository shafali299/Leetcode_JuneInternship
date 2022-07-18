class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) 

    {
        int n=arr.size();
        
         vector<int>v;
        stack<int>s;
        v.push_back(arr[n-1]);
        s.push(arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false and arr[i]<s.top())
            s.pop();
            
            int nextsm=(s.empty())?arr[i]:arr[i]-s.top();
            v.push_back(nextsm);
            s.push(arr[i]);
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};