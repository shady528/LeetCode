class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) 
    {
        int MOD = 1e9+7;
        int n = arr.size();

        sort(arr.begin(),arr.end());

        unordered_map<int, long long> mp;

        mp[arr[0]] = 1;

        for(int i = 1; i<n; i++)
        {
            int root = arr[i];
            mp[root] = 1;

            for(int j = 0; j<i; j++)
            {
                int LC = arr[j];

                if(root%LC == 0 and mp.find(root/LC) != mp.end())
                    mp[root] += mp[LC] * mp[root/LC]; 
            }
        }
        long res = 0;
        for(auto &it : mp)
            res = (res+it.second) % MOD;

        return res;
    }
};