class Solution {
public:
    string reverseWords(string s) 
    {
        string res = "", word;

        for(auto ch : s)
        {
            if(ch != ' ') word += ch;

            else
            {
                reverse(word.begin(),word.end());
                res += word + " ";
                word = "";
            }
        }
        reverse(word.begin(),word.end());
        res += word;
        return res;
    }
};