#include <string>
#include <vector>
#include <unordered_map>
namespace problem_13 
{
    using namespace std;
    int romanToInt(string s)
    {
        if (s.empty())
            return 0;

        constexpr auto roman = [](const char c){
            switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            }
            return 0;
        };

        int result = 0;
        int prev = 0;
        int curr = 0;
        for (const auto c : s) {
            prev = curr;
            curr = roman(c);
            if (prev < curr)
                result -= 2 * prev;
            result += curr;
        }
        return result;
    }
}