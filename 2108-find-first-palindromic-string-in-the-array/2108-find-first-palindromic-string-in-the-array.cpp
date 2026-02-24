class Solution {
public:
    string toCheck(string s){
        string str = s;
        reverse(str.begin(), str.end());
        if(str == s) return str;
        return "";
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            string s1 = toCheck(words[i]);
            if(s1!="") return s1;
        }   
        return "";
    }
};