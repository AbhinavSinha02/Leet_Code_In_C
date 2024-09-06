int findFinalValue(int* nums, int numsSize, int original) {
    
    for(int i=0;i<numsSize;i++){
        if(original==nums[i]){
            return findFinalValue(nums,numsSize, 2*original);
        }
    }
    return original;
}
