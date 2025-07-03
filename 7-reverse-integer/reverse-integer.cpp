class Solution {
public:
    int reverse(int x) {
        int a=0;
        while(x!=0){
            int dig=x%10;
             if ((a > INT_MAX / 10) || (a < INT_MIN / 10)) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
             a=a*10+dig;
             x=x/10;
        }
        return a;
        
    }
    
};