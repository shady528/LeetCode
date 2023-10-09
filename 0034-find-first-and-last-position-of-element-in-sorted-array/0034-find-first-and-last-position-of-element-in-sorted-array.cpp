class Solution {
public:
    int firstocc(vector<int>& nums, int target)
    {
        int s = 0;
        int e = nums.size()-1;
        int mid = (s+e)/2;
        int ans = -1;
        
        while(s <= e)
        {
            if(nums[mid] == target)
            {
                ans = mid;
                e = mid - 1;
            }
            
            else if(target < nums[mid])
            {
                e = mid-1;
            }
            
            else if(target > nums[mid])
            {
                s = mid+1;
            }
            
            mid = (s+e)/2;
        }
        return ans;
    }
    
    int lastocc(vector<int>& nums, int target)
    {
        int s = 0;
        int e = nums.size()-1;
        int mid = (s+e)/2;
        int ans = -1;
        
        while(s <= e)
        {
            if(nums[mid] == target)
            {
                ans = mid;
                s = mid + 1;
            }
            
            else if(target < nums[mid])
            {
                e = mid-1;
            }
            
            else if(target > nums[mid])
            {
                s = mid+1;
            }
            
            mid = (s+e)/2;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> v;
        
        v.push_back(firstocc(nums, target));
        v.push_back(lastocc(nums, target));
        
        return v;
    }
};