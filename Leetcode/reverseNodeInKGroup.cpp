//
// Created by Ashish Raj Singh on 03/09/25.
//
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

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * temp= head;
        int n = k;
        while(n>0) {
            if(temp == nullptr) return head;
            temp = temp->next;
            n--;
        }

        temp = reverseKGroup(temp, k);
        ListNode* tempHead = head;
        n=k;
        while (n>0) {
            ListNode* nxt = tempHead->next;

            tempHead->next = temp;
            temp = tempHead;
            tempHead = nxt;
            n--;
        }

        return temp;

    }
};