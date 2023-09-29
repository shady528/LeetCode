class Solution {
public:
    int countHillValley(vector<int>& nums) 
    {
        vector<int> v;
        v.push_back(nums[0]);

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]!=nums[i-1]) v.push_back(nums[i]);
        }

        int i = 1;
        int c = 0;

        while(i<v.size()-1)
        {
            if(v[i]>v[i+1] and v[i]>v[i-1]) c++;

            if(v[i]<v[i+1] and v[i]<v[i-1]) c++;

            i++;
        }
        return c;
    }
};