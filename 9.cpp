#include <iostream>
#include <cmath>
#include <stack>
namespace problem_9
{
    using namespace std;
    bool isPalindrome(int x) 
    {
        if (x < 0)
            return false;
        if (x < 10)
            return true;

        long long y = 0;
        for (long long temp=x; temp != 0; temp /= 10) {
            y *= 10;
            y += temp%10;
        }
        return x == y;
    }
}
