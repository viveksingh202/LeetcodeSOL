class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  
        
        int copy = x;
        long long sum = 0; 
        
        while (copy != 0) {
            int n = copy % 10;
            sum = sum * 10 + n;
            copy = copy / 10;
        }
        
        return (sum == x);
    }
};
