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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // create a list
        auto sentinel = ListNode();
        // start at the beginning of each list
        auto i = list1;
        auto j = list2;
        auto k = &sentinel;
        // reroute data from the new list and traverse
        while ((i != nullptr) && (j != nullptr))
        {
            if ((i->val) <= (j->val))
            {
                k->next = i;
                i = i->next;
            }
            else
            {
                k->next = j;
                j = j->next;
            }
            k = k->next;
        }
        // append the remaining data if any
        if (i != nullptr)
        {
            k->next = i;
        }
        else
        {
            k->next = j;
        }
        // return the new list
        return sentinel.next;
    }
};