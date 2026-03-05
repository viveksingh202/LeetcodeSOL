class Solution {
public:
    int toCheck(int n){
        int count1=0;
        while(n>0){
            n=n/10;
            count1++;
        }
        if(count1%2==0) return 1;
        return 0;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count=count+toCheck(nums[i]);
        } 
        return count;   
    }
};