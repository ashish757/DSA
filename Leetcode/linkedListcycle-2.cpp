//
// Created by Ashish Raj Singh on 03/09/25.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool cycle = false;
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow==fast) {
                cycle = true;
                break;
            }
        }

        if (!cycle) {
            return NULL;
        }

        // find starting of the cycle
        slow = head;
        while(true) {
            if (slow == fast) {
                return slow;
            }
            slow = slow->next;
            fast = fast->next;

        }
    }
};