class Solution {
    public int mySqrt(int x) {
        int start= 1, end = x, ans = 0;
        while(start <= end){
            long mid = (start + (end - start)/2) ;
            if(mid * mid > x){
                end = (int)mid - 1;
            }
            else if(mid * mid <= x){
                ans = (int)mid;
                start = (int)mid+1;
            }

        }
        return ans;
    }
}
