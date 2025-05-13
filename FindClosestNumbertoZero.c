int findClosestNumber(int* nums, int numsSize) {

    int num = INT_MAX;
    int i;
    int closest;
    for(i = 0; i < numsSize; i++) {
        if(abs(nums[i]) < num || abs(closest) == nums[i]) {
            num = abs(nums[i]);
            closest = nums[i];
        }
    }
    return closest;
}
