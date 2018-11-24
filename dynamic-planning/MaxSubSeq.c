//leetcode: 最大子序和
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