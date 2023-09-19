
vector<int> twoSum(vector<int>& nums, int target) {
    
    vector<int> output;
    auto iter = nums.begin();

    while(iter != nums.end())
    {
        int number = target - *iter;
        auto nextIter = iter;
        auto it = find(nextIter + 1, nums.end(), number);

        if(it != nums.end())
        {
            output.push_back(iter - nums.begin());
            output.push_back(it - nums.begin());
        }
            
        ++iter;
    }
    
    return output;

}