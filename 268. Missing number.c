int missingNumber(int* nums, int numsSize) {
    int l= (numsSize*(numsSize+1))/2;int count=0;
    for(int i=0;i<numsSize;i++){
        count+=nums[i];
    }
    return l-count;
}
