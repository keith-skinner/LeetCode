#include <vector>

namespace problem_26
{
    using namespace std;
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.size() < 2)
            return nums.size();
        
        constexpr auto next_mismatch = 
            [](const auto value, auto iter, const auto end) 
        {
            while (iter != end && value == *iter)
                ++iter;
            return iter;
        };
        
        auto i = begin(nums);
        auto j = cbegin(nums)+1;
        const auto e = cend(nums);
        
        do {
            j = next_mismatch(*i, j, e);
            if (j != e)
                *(++i) = *j;
        } while(j != e);
        
        return distance(begin(nums), i+1);
    }
}