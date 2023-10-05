
vector<int> productExceptSelf(vector<int>& nums){
    vector<int> result;

    int product = 1;
    for (int i = 0; i < nums.size(); ++i){
        product *= nums[i]; //O(1)
        result.push_back(product); //O(1)
    } //O(n)
    
    product = 1;
    for(int i = result.size() - 1; i > 0; --i){
        result[i] = result[i-1] * product;
        product *= nums[i];
    } // O(n-1)
    result[0] = product;
    return result;
}