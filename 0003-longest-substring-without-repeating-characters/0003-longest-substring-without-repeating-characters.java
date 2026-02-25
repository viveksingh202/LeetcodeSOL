class Solution {
    public int lengthOfLongestSubstring(String s) {

        int[] freq = new int[256]; // ASCII characters
        int i = 0;
        int maxLen = 0;

        for (int j = 0; j < s.length(); j++) {

            char ch = s.charAt(j);

            // jab tak duplicate hai, window shrink karo
            
            while (freq[ch] > 0) {
                freq[s.charAt(i)]--;
                i++;
            }

            // character add karo window me
            freq[ch]++;

            // length calculate
            maxLen = Math.max(maxLen, j - i + 1);
        }

        return maxLen;
    }
}
