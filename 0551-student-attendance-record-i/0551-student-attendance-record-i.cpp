class Solution {
public:
    bool checkRecord(string s) {
        int n=s.size();
        int count1=0;
        int count2=0;
        int a;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                count1++;
            }
            else if(i+2<n && s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                return false;  
            }
        }
        if(count1>1) return false;
        return true;    
    }
};