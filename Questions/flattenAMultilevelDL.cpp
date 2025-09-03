//
// Created by Ashish Raj Singh on 03/09/25.
//
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL) return head;

        Node * current = head;
        while(current != NULL) {
            if(current->child != NULL) {
                // child exists
                Node * nxt = current->next;
                Node * n = flatten(current->child);

                current->next = n;
                current->next->prev = current;
                current->child = NULL;

                //find last node
                while(current->next != NULL) {
                    current = current->next;
                }

                if(nxt != NULL) {
                    current->next = nxt;
                    nxt->prev = current;
                }

            }

            current = current->next;
        }


        return head;
    }
};