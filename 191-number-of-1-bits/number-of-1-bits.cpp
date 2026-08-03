class Solution {
public:
    int hammingWeight(int n) {
        int count = 0; //taking initial count 0
        while(n!=0){ //jab tak n not equal to zero hai tab tak we take last digit from n's binary form and check if its 1-> count++ and right shift n by 1
            if(n&1) count++;
            n=n>>1;
        }
        return count;
    }
};