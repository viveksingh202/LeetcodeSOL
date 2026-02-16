class Solution {
private:
    void Solve(vector<int>nums,int index, vector<int>&output, vector<vector<int>>&ans){
        if(index==nums.size()){
            ans.push_back(output);
            return;
        }
        // execlude
        Solve(nums,index+1,output,ans);
        // include
        output.push_back(nums[index]);
        Solve(nums,index+1,output,ans);
        output.pop_back();

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<int>output;
        vector<vector<int>>ans;
        Solve(nums, index, output, ans);
        return ans;
    } 
};