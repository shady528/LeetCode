class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> mp;

        for(auto num:nums) mp[num]++;
        vector<int> res;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second * 3 > nums.size()) res.push_back(it->first);
        }
        return res;
    }
};