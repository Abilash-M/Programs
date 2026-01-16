class Solution {
    public String longestCommonPrefix(String[] strs) {
        int n = strs.length;
        Arrays.sort(strs);
        String prefix = strs[0];
        if(n == 1){
            return prefix;
        }
        if(prefix.length() == 0){
            return "";
        }
       
        for(int i = 0 ; i < prefix.length(); i++){
            if(!(prefix.charAt(i) == strs[n-1].charAt(i)))
            {
                return prefix.substring(0,i);
            }
        }
        return prefix;
    }
}
