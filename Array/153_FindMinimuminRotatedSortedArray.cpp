
int findMin(vector<int> nums){
    int left = 0;
    int right = nums.size() - 1;

    if(nums[left] <= nums[right])
        return nums[0];

    while(left <= right){
        int mid = (right + left) / 2;

        if(mid > 0 && nums[mid] < nums[mid - 1]){
            return nums[mid];
        }
        else if(mid < nums.size() - 1 && nums[mid] > nums[mid + 1])
            return nums[mid + 1];
                
        else if(nums[left] <= nums[mid])
            left = mid + 1;
        else if(nums[right] >= nums[mid])
            right = mid - 1;
    }
    return nums[left];
}