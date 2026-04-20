class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int mn=INT_MIN;
        for(int i=0;i<n;i++){
            int elem=colors[i];
            for(int j=i;j<n;j++){
                if(elem!=colors[j]){
                    mn=max(abs(i-j), mn);
                }
            }
        }
        return mn;
        
    }
};