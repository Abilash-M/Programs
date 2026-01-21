class Solution {
    public String addBinary(String a, String b) {
        StringBuilder res = new StringBuilder();
        int l = a.length() - 1, r = b.length() - 1;
        int carry = 0;
        while(l >= 0 || r >= 0 || carry == 1){
            int b1 = l >= 0 ? a.charAt(l--) - '0' : 0;
            int b2 = r >= 0 ? b.charAt(r--) - '0' : 0;
            int sum = b1 + b2 + carry;
            res.append(sum %2);
            carry = sum/2;

        }
      
        return res.reverse().toString();
    }
}
