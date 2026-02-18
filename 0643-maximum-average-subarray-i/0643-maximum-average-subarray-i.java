class Solution {
    public double findMaxAverage(int[] arr, int k) {
        int sum=0;
        int n = arr.length;
        for (int i =0;i<k;i++){
            sum=sum+arr[i];
        }
        int maxsum=sum;
        for(int i =k;i<n;i++){
            sum= sum+arr[i]-arr[i-k];// sliding window
            maxsum=Math.max(sum,maxsum);
        }
        return (double) maxsum/k;
    }
}