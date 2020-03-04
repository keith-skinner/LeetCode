#include <string>
namespace problem_28 {
    using namespace std;
    int strStr(string haystack, string needle) 
    {
        if (needle.size() == 0)
            return 0;
        
        for (int i=needle.size()-1; i<haystack.size(); ++i) {
            if (haystack[i] == needle.back()) {
                bool same = true;
                for(int n=0; same && n<needle.size(); ++n)
                    if (haystack[i-n] != needle[needle.size()-n-1])
                        same = false;
                if (same) {
                    return i-needle.size()+1;
                }
            }
        }
        return -1;
    }
}
