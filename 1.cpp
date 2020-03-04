#include <vector>
#include <unordered_map>

namespace problem_1 
{
    using namespace std;
    vector<int> twoSum(vector<int> & nums, int target)
    {
        unordered_map<int, int> values;
        values.reserve(nums.size());
        for (int i=0; i<nums.size(); ++i) {
            auto complement = values.find(target-nums[i]);
            if ( complement != values.end())
                return { i, complement->second };
            values[ nums[i] ] = i;
        }
        return {};
    }
}
