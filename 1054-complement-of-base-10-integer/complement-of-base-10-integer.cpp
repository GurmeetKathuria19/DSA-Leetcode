class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 0;
        int x = n;
        if(n == 0) return 1;
        while(x!=0){
            mask = mask<<1;
            mask = mask | 1;
            x = x>>1;
        }
        n = ~n;
        int ans = mask & n;
        return ans;
    }
};