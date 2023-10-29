class Solution {
public:
    int poorPigs(int buckets, int die, int test) 
    {
        int t = test/die+1;
        int pigs = 0;
        while(pow(t,pigs) < buckets) pigs++;

        return pigs;
        
    }
};