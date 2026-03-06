class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char>st;
        vector<char>ans;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(st.empty()){
                st.push(ch);
            }
            else if(st.top()==ch)
                st.pop();
            else
                st.push(ch);
            
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }  
        reverse(ans.begin(), ans.end());
        return string(ans.begin(), ans.end());  
    }
};