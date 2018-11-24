//leetcode: 最大子序和

/** 解题思路：要求最大子序和，某一个时刻的最大自序和为m，这个次大子序的后面紧跟的一个数字为n，
*	如果m+n>m也就是说n为正数，那么最大自序和就是m+n，如果m+n<n，也就是说如果m<0，那么下一个最大自序就是n
*/
int maxSubArray(int* nums, int numsSize) {
    int max=nums[0];
    int sum=nums[0];
    int i;
    for(i=1;i<numsSize;i++){
        if(sum<=0) sum=nums[i];
        else sum+=nums[i];       
        if(sum>max) max=sum;
    }
    return max;
}