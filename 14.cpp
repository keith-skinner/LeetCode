#include <vector>
#include <string>
#include <algorithm>

namespace problem_14
{
    using namespace std;
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.empty())
            return "";
        if (strs.size() == 1)
            return strs[0];
        
        constexpr auto find_shortest = [](auto a, auto b){ return a.size() < b.size(); };
        auto shortest = std::min_element(std::begin(strs), std::end(strs), find_shortest);
        std::swap(*strs.begin(), *shortest);
        
        for (int i=0; i<strs[0].size(); ++i)
            for (int str=1; str<strs.size(); ++str)
                if (strs[str][i] != strs[0][i])
                    return strs[0].substr(0, i);

        return strs[0];
    }
}
