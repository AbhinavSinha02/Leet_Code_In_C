int pivotIndex(int* nums, int numsSize) {
    int numL=0,numR=0;
    for(int i=0;i<numsSize;i++){
        numR+=nums[i];
    }
    for(int i=0;i<numsSize;i++){
        numR-=nums[i];
        if(numL==numR){
            return i;
        }
        else{
            numL+=nums[i];
            
        }
    }
    return -1;
}
