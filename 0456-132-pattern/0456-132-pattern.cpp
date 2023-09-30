class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        int n = nums.size();
        int n3 = INT_MIN;

        stack<int> st;

        for(int i = n-1; i>=0; i--)
        {
            if(nums[i]<n3) return true;

            while(!st.empty() and st.top()<nums[i])
            {
                n3 = st.top();
                st.pop();
            }

            st.push(nums[i]);
        }
        return false;
    }
};