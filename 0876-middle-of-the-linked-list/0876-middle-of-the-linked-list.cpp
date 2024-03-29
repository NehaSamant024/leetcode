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
//Tortoise and hare approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode *hare,*tortoise;
        hare=tortoise=head;
        while(hare&&hare->next!=NULL)
        {
            hare=hare->next->next;
            tortoise=tortoise->next;
        }
        return tortoise;
    }
};