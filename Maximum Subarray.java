class Solution {
    public int maxSubArray(int[] nums) {
        int maxsum=nums[0];int sum=0;
        for(int x:nums){
            if(sum<0){
                sum=0;
            }
            sum+=x;
            maxsum=Math.max(sum,maxsum);
        }
        return maxsum;
    }
}
