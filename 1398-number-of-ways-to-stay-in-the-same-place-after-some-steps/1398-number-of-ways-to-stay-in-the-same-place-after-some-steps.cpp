class Solution {
public:
    int n;
    int mod = 1e9+7;
    int dp[501][501];
    int numWays(int steps, int arrLen) 
    {
        arrLen = min(steps,arrLen);
        n = arrLen;
        memset(dp,-1,sizeof(dp));
        return solve(0,steps);   
    }

    int solve(int idx, int steps)
    {
        if(idx<0 or idx>=n) return 0;
        if(steps == 0) return idx==0;

        if(dp[idx][steps] != -1) return dp[idx][steps];

        int res = solve(idx+1, steps-1);
        res = (res + solve(idx-1, steps-1))%mod;
        res = (res + solve(idx,steps-1))%mod;

        return dp[idx][steps] = res;
    }
};