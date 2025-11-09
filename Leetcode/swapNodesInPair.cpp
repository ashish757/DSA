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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr) return head;
        if (head->next == nullptr) return head;


        ListNode* temp = head->next->next;

        temp = swapPairs(temp);

        ListNode* tempHead = head;

        ListNode* next = tempHead->next;

        tempHead->next = temp;
        temp = tempHead;
        tempHead = next;

        tempHead->next = temp;

        return tempHead;

    }
};