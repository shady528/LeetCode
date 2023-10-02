class Solution {
public:
    bool winnerOfGame(string colours) 
    {
        int n = colours.size();
        int alice=0, bob=0;

        for(int i=1; i<n-1; i++)
        {
            if(colours[i-1]==colours[i] and colours[i]==colours[i+1])
            {
                if(colours[i] == 'A') alice++;
                else bob++;
            }
        }
        return alice > bob;
    }
};