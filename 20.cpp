#include <stack>
#include <string>
#include <iostream>

namespace problem_20 
{
    using namespace std;
    bool isValid(string s) 
    {
        constexpr auto match = [](char c){
            switch(c) {
                case ')': return '(';
                case ']': return '[';
                case '}': return '{';
                default : return '\0';
            }
        };
        
        stack<char> parens;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{')
                parens.push(c);
            else if (parens.empty())
                    return false;
            else if (parens.top() == match(c))
                parens.pop();
            else 
                return false;
        }
        return parens.empty();
    }
}