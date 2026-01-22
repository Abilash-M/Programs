class Solution {
    public int divide(int dividend, int divisor) {
        boolean sign = (dividend >= 0 && divisor <0) || (dividend<0 && divisor >=0) ? false : true;
        if(dividend == Integer.MIN_VALUE && divisor == -1){
            return Integer.MAX_VALUE;
        }
       long n = Math.abs((long) dividend);
       long d = Math.abs((long) divisor);
       long q = 0;
       while(n >= d){
        int cnt = 0;
        while(n >= d << (cnt+1)){
            cnt++;
        }
        q +=1L <<cnt;
        n -= d << cnt ;

       }
       return sign ? (int)q : (int)(-q);
    }
}
