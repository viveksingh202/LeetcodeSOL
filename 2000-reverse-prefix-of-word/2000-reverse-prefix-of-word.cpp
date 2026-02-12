class Solution {
public:
    string reversePrefix(string s, char ch) {
        int idx=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                idx=i;
                break;
            }
        }
        if(idx==-1) return s;
        int i=0;
        int j=idx;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};