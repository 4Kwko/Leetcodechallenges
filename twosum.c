int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int i = 0, j = 0, k;
    int firstnum, secondnum;

    int* result = (int*)malloc(2 * sizeof(int));
        for(i = 0; i < numsSize; i++){
            firstnum = nums[i];
        
            for(j = i + 1; j < numsSize; j++){
                secondnum = nums[j];
                if(secondnum + firstnum == target) {
                    result[0] = i;
                    result[1] = j;
                    *returnSize = 2;
                    return result;
                }
            }
        }
        *returnSize = 0;
        return NULL;
    } 
