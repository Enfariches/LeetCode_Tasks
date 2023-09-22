
int maxSubArray(vector<int> nums) {
    if (nums.size() == 1)
        return nums[0];

    int ans = nums[0];
    int max = INT_MIN;
    for(int i = 1; i <= nums.size() - 1; ++i)
    {
        int temp = nums[i] + ans;

        if(temp >= ans){
            if(nums[i] > temp)
                ans = nums[i];
            else
                ans = temp;
        }
            
        else if(temp < ans){
            if (nums[i] > temp){
                max = std::max(max, ans);
                ans = nums[i];
            }
                
            else{
                max = std::max(max, ans);
                ans = temp;
            } 
        }

        else
            ans = nums[i];    
    }
    return std::max(ans, max);
}