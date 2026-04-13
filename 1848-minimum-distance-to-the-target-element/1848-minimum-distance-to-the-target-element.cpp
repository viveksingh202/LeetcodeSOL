class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        int i=0;
        int mn= INT_MAX;
        while(i<n){
            if(nums[i]==target){
                mn=min(abs(i-start), mn);
            }
            i++;
        } 
        return mn;   
    }
};