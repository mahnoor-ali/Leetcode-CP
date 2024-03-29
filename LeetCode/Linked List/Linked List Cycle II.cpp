
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)
          return NULL;
        else if(head->next == NULL)
          return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
             break;
        }
        if (slow == fast) {
                ListNode* ptr = head;
                while (ptr != slow) {
                    ptr = ptr->next;
                    slow = slow->next;
                }
                return ptr;
            }
        return NULL; // no cycle found
    }
};