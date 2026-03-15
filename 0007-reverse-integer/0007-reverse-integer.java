class Solution {
    public int reverse(int x) {

        int copy = x;
        int rev = 0;

        while(copy != 0){
            int ld = copy % 10;

            
            if(rev > Integer.MAX_VALUE/10 || rev < Integer.MIN_VALUE/10)
                return 0;

            rev = rev * 10 + ld;
            copy = copy / 10;      
        } 

        return rev;
    }
}