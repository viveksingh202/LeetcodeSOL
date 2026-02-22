class Solution {
    public int binaryGap(int n) {
        int lp = -1;
        int ans = 0;
        int p = 0;

        while (n > 0) {
            if ((n & 1) == 1) {
                if (lp!= -1) {
                    ans = Math.max(ans, p-lp);
                }
                lp=p;
            }
            n = n >> 1;
            p++;
        }
        return ans;
    }
}