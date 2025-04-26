/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        auto sentinel = ListNode();
        auto i = l1;
        auto j = l2;
        auto k = &sentinel;
        // add with nodes
        auto carry_val = 0;
        while (i != nullptr || j != nullptr)
        {
            auto a = i == nullptr ? 0 : i->val;
            auto b = j == nullptr ? 0 : j->val;
            auto s = a + b + carry_val;
            if (s > 9)
            {
                s = s % 10;
                carry_val = 1;
            }
            else
            {
                carry_val = 0;
            }
            k->next = new ListNode{s};
            i = i == nullptr ? nullptr : i->next;
            j = j == nullptr ? nullptr : j->next;
            k = k->next;
        }
        // add with carry value
        if (carry_val > 0)
        {
            k->next = new ListNode{carry_val};
        }
        return sentinel.next;
    }
};