class Solution {
public:
    bool isPowerOfTwo(int n) {
        //brute force approach
        for(int i=0;i<31;i++){
            int ans = pow(2,i);
            if(ans == n) return true;
        }
        return false;

        //optimal approach 1-> 0001 , 2-> 0010 , 4-> 0100 , 8->1000 and so on means if set bits in binary form = 1; then power of 2 else not
    }
};