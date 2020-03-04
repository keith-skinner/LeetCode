#include <vector>
#include <algorithm>

namespace problem_27
{
    using namespace std;
    int removeElement(vector<int>& nums, const int val) 
    {
        const auto iter = remove(begin(nums), end(nums), val);
        nums.erase(iter, end(nums));
        return nums.size();
    }
}
