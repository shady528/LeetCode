class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int i = 0, j = nums.size()-1;

        while(i<j)
        {
            if(i<j and nums[i]%2==0) i++;
            if(i<j and nums[j]%2==1) j--;

            swap(nums[i],nums[j]);
        }
        return nums;
    }
};