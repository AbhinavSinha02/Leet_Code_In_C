int maxArea(int* height, int heightSize) {
    int max=0, left=0, right=heightSize-1 ;
    while(left<right){
        int current_area=(height[left] < height[right] ?height[left] :height[right]) * (right-left);
        if(current_area>max){
            max = current_area ;

        }
        height[left] < height[right] ? left++ : right-- ;
    }
    
    return max;

}
