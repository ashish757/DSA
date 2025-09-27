//
// Created by Ashish Raj Singh on 03/09/25.
//
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> um;

        Node* newHead = nullptr;
        Node* tempHead = head;

        while (head != NULL && tempHead != NULL) {

            Node* newNode = new Node(tempHead->val);
            um.insert({tempHead, newNode});

            if(newHead == nullptr) {
                newHead = newNode;
            } else {
                newHead->next = newNode;
                newHead = newHead->next;
            }

            tempHead = tempHead->next;
        }

        Node* newTemp = um[head];
        Node* oldTemp = head;
        while(newTemp != NULL && oldTemp != NULL) {
            if (oldTemp->random == NULL) {
                oldTemp = oldTemp->next;
                newTemp = newTemp->next;
                continue;
            }
            um.at(oldTemp)->random = um.at(oldTemp->random);

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        return um[head];

    }
};