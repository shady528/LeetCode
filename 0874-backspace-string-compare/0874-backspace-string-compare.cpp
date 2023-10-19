class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        return str(s)==str(t);   
    }

    string str(string s)
    {
        int n = s.length()-1;
        int c = 0;
        string res = "";

        for(int i = n; i>=0; i--)
        {
            if(s[i] == '#') c++;

            else
            {
                if(c>0) c--;
                else res += s[i];
            }
        }
        return res;
    }
};