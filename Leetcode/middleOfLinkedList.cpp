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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while(temp != nullptr) {
            n++;
            temp = temp->next;
        }

        int mid;
        if (n % 2 == 0) {
            mid = (n/2);
        } else {
            mid = ( n / 2 );
        }

        ListNode* midPtr = head;
        while(mid>0) {
            midPtr = midPtr->next;
            mid--;
        }
        return midPtr;

    }
};