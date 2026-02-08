class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        int n = s.size();
        for (int i = 1; i <= n; i++) {
            string temp = s;   // fresh copy
            rotate(temp.begin(), temp.begin() + i, temp.end());
            if (temp == goal) return true;
        }
        return false;
    }
};
