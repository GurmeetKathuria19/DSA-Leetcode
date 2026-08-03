class Solution {
public:
    int reverse(int x) {
        long reverse=0; //store reverse
        int ld = 0; //last digit
        long a=x; //long because int ki range se bahar jaa skta hai
        while(a!=0){
            ld = a%10;
            reverse= (reverse*10)+ld;
            a=a/10;
        }
        
        if(reverse>INT_MAX || reverse<INT_MIN) return 0; //exception case
        return reverse;
    }
};