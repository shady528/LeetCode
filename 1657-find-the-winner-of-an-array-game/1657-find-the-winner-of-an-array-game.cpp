class Solution {
public:
    int getWinner(vector<int>& arr, int k) 
    {
        int n = arr.size();

        int maxel = *max_element(begin(arr),end(arr));

        if(k >= n) return maxel;
        
        int winner = arr[0];
        int win = 0;

        for(int i = 1; i<n; i++)
        {
            if(arr[i] > winner)
            {
                winner = arr[i];
                win = 1;
            }
            else 
                win++;
            if(win == k or winner == maxel)
                return winner;

        }
        return winner;
    }
};