class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;   // pointer for t

        for (int i = 0; i < s.size(); i++) {
            while (j < t.size() && s[i] != t[j]) {
                j++;
            }
            if (j == t.size()) return false;
            j++;   // match mila, aage badho
        }
        return true;
    }
};