#include <vector>
#include <deque>
#include <climits>
#include <queue>

namespace problem_7 
{
    using namespace std;

    int reverse(int x)
    {
        if (-10 < x and x < 10)
            return x;

        long long place = 1;
        queue<char> digits;
        while (x != 0) {
            digits.push(x%10);
            x /= 10;
            place *= 10;
        }
        place /= 10;

        long long result = 0;
        while (!digits.empty()) {
            result += place * digits.front();
            digits.pop();
            place /= 10;
        }
        
        if (result < INT_MIN || INT_MAX < result)
            return 0;
        
        return static_cast<int>(result);
    }

}