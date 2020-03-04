#include <algorithm>

namespace problem_21
{
    using namespace std;

    struct ListNode {
        int val;
        ListNode * next;
        ListNode(int x) : val(x), next(nullptr) {}
    };

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        if(l1 == nullptr)
            return l2;
        if(l2 != nullptr && l2->val < l1->val ) 
            swap(l1,l2);
        l1->next=mergeTwoLists(l1->next, l2);
        return l1;
    }
}