class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m=nums2.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int elem=nums1[i];
            for(int j=0;j<m;j++){
                if(elem == nums2[j]){
                    int k=j+1;
                    for(; k<m;k++){
                        if(nums2[k]>elem){
                            ans.push_back(nums2[k]);
                            break;
                        }
                      // if(k == m) ans.push_back(-1);
                    }
                    if(k == m) ans.push_back(-1);

                }
            }    
        } 
        return ans;   
    }
};