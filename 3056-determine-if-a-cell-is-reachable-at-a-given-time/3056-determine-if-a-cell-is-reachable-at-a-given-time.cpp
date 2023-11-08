class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t)
    {
        int h = abs(sx-fx);
        int v = abs(sy-fy);

        if(h==0 and v==0 and t==1) return false;

        if(t>=max(h,v)) return true;
        
        return false;
    }
};