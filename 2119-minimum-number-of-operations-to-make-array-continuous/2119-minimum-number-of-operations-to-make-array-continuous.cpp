class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int n = nums.size();
        set<int> set;
        for(auto it:nums)
            set.insert(it);

        vector<int> v;
        for(auto it:set)
            v.push_back(it);

        sort(v.begin(),v.end());
        
        int right = 0;
        int maxi = INT_MIN;
        int s = v.size();

        for(int left = 0; left<n; left++)
        {
            while(right<s and v[right]-v[left]<=n-1)
                right++;
            int curr = right-left;
            maxi = max(curr,maxi);
        }
        return n-maxi;
    }
};