#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    
    vector<int> result;
    auto iter = nums.begin();

    while(iter != nums.end())
    {
        int number = target - *iter;
        auto nextIter = iter;
        auto it = find(nextIter + 1, nums.end(), number);

        if(it != nums.end())
        {
            result.push_back(iter - nums.begin());
            result.push_back(it - nums.begin());
        }
            
        ++iter;
    }
    
    return result;

}