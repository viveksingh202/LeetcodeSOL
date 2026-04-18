class Solution {
public:
    int mirrorDistance(int n) {
        int a=n;
        int md=0;
        int prd=0;
        while(a>0){
            md=a%10;
            prd=prd*10 + md;
            a=a/10;
        } 
        return abs(n-prd);
    }
};