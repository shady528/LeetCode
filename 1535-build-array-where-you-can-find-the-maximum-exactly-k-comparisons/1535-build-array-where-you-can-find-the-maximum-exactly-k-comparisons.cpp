class Solution {
public:

    int N, M, K;
    int mod = 1e9+7;
    int dp[51][51][101];

    int solve(int idx, int cost, int maxsofar)
    {
        if(idx==N)
        {
            if(cost==K) return 1;
            else return 0;
        }

        if(dp[idx][cost][maxsofar] != -1) return dp[idx][cost][maxsofar];

        int result = 0;
        for(int i=1; i<=M; i++)
        {
            if(i>maxsofar)
                result = (result+solve(idx+1,cost+1,i))%mod;
            else
                result = (result+solve(idx+1,cost, maxsofar))%mod;
        }
        return dp[idx][cost][maxsofar] = result%mod;
    }

    int numOfArrays(int n, int m, int k) 
    {
        N=n;
        M=m;
        K=k;
        memset(dp,-1,sizeof(dp));
        return solve(0,0,0);   
    }
};