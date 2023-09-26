class Solution {
public:
    string smallestSubsequence(string s) 
    {
        int n = s.length();
        string result;
        vector<bool> taken(26, false);
        vector<int> lastind(26);

        for(int i = 0; i<n; i++)
        {
            char ch = s[i];
            lastind[ch - 'a'] = i;
        }

        for(int i = 0; i<n; i++)
        {
            int ind = s[i] - 'a';

            if(taken[ind] == true) continue;

            while(result.length() > 0 && result.back() > s[i] && lastind[result.back() - 'a'] > i)
            {
                taken[result.back() - 'a'] = false;
                result.pop_back();
            }
            result.push_back(s[i]);
            taken[ind] = true;
        }
        return result;
        
    }
};