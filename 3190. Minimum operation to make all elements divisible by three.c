int minimumOperations(int* nums, int numsSize) {
    int count=0,i=0;
    while(i<numsSize){
        if(nums[i]%3!=0){
            count+=1;
        }
        i++;

    }
    return count;
}
