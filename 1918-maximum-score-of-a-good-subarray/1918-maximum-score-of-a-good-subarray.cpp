class Solution {
public:
    int maximumScore(vector<int>& nums, int k) 
    {
        int n = nums.size();

        int i = k, j = k;
        int currMin = nums[k];
        int res = nums[k];

        while(i>0 or j<n-1)
        {
            int leftval = (i>0) ? nums[i-1]:0;
            int rightval = (j<n-1) ? nums[j+1]:0;

            if(leftval < rightval)
            {
                j++;
                currMin = min(currMin, nums[j]);
            }
            else
            {
                i--;
                currMin = min(currMin, nums[i]);
            }
            res = max(res,currMin*(j-i+1));
        }
        return res;
    }
};