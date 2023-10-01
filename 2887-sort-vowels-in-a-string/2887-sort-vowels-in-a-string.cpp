class Solution {
public:
    bool isvowel(char ch)
    {
        ch = toupper(ch);
        return (ch=='A') or (ch=='E') or (ch=='I') or (ch=='O') or (ch=='U');
    }
    string sortVowels(string s) 
    {
        string t = s;
        int n = s.length();
        vector<int> vow;

        for(int i = 0; i<n; i++)
        {
            if(isvowel(s[i])) vow.push_back((int)s[i]);
        }
        sort(vow.begin(),vow.end());
        int j = 0;

        for(int i = 0; i<n; i++)
        {
            if(isvowel(t[i])) {t[i] = (char)vow[j++];}
        }
        return t;
    }
};