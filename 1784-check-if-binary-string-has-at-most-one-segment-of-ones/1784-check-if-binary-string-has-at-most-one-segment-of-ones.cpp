class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        bool seenzero=false;
        for(char ch:s){
            if(ch=='0') seenzero =true;
            if(ch=='1' && seenzero==true) return false;
        }   
        return true; 
    }
};