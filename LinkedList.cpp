//
// Created by Ashish Raj Singh on 05/08/25.
//

#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;

    Node(int val) {
        this->value = val;
        next = nullptr;
    }
};

class LL {
    public:
    Node* head;
    Node* tail;

    LL () {
        head = nullptr;
        tail = nullptr;
    }

    void pushFront(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pushBack(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;

    }

    void popFront() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    }
    void popBack() {
        if (head == nullptr) {
            return;
        }

        Node* nxt = head;
        while (nxt != nullptr) {

            if (nxt->next->next == nullptr) {
                nxt->next = nullptr;
                delete tail;
                tail = nxt;

                return;
            }

            nxt = nxt->next;
        }
    }
    void insert(int val, int index) {
        if (index<0) {
            cout << "Invalid index" << endl;
            return;
        }
        if (head == nullptr || index == 0) {
            pushFront(val);
            return;
        }
        Node* temp  = head;
        for (int i = 1; i < index; i++) {
            if (temp == nullptr) {
                cout<<"Invalid index"<<endl;
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    int search(int val) {
        if (head == nullptr) {
            return -1;
        }
        Node* temp = head;
        int i =0;
        while (temp != nullptr) {
            if (temp->value == val) {
                return i;
            }
            i++;
            temp = temp->next;
        }
        return -1;
    }
    void print() {
        cout<<(*head).value<<" --> "<<(*tail).value<<endl;

        Node* next = this->head;

        while (next != nullptr) {
            // cout<<(*next).value<< " -> ";
            // next  = (*next).next;
            cout<< next->value;
            next = next->next;
            if (next != nullptr) {
                cout<<" -> ";
            }
        }
        cout<<endl;

    }

    // ~LL() {
        // delete newNode;
    // }

};

void print(Node* head) {
    Node* next = head;
    while (next != nullptr) {
        cout<< next->value;
        next = next->next;
        if (next != nullptr) {
            cout<<" ";
        }
    }
    cout<<endl;

}


Node* mergeLists(Node* a, Node* b) {
    Node* temp1 = a;
    Node* temp2 = b;
   Node* prev = nullptr;

    while(temp1 != nullptr && temp2 != nullptr) {
        if (temp1->value < temp2->value) {
            if (prev == nullptr) {
                prev = temp1;
            }else {
                prev->next = temp1;

            }
            temp1 = temp1->next;
        } else if (temp1->value == temp2->value){

            if (prev == nullptr) {
                prev = temp1;
            }else {
                prev->next = temp1;
            }
            prev->next = temp2;

            temp1 = temp1->next;
            temp2 = temp2->next;

        } else {
            if (prev == nullptr) {
                prev = temp2;
            } else {
                prev->next = temp2;

            }
            temp2 = temp2->next;
        }
    }

    while (temp1 != nullptr) {
        if (prev == nullptr) {
            prev = temp1;
        } else {
            prev->next = temp1;
        }
        temp1 = temp1->next;
    }
    while (temp2 != nullptr ) {
        if (prev == nullptr ) {
            prev = temp2;
        } else {
            prev->next = temp2;
        }
        temp2 = temp2->next;
    }

    return prev;

}

Node* copyList(Node* head) {
    Node* temp1 = nullptr;
    Node * rHead = nullptr;

    while (head != nullptr) {
        Node* newNode = new Node(head->value * 100);
        if (temp1 == nullptr) {
            temp1 = newNode;
            rHead = newNode;
        } else {
            temp1->next = newNode;
            temp1 = temp1->next;
        }
        head = head->next;
    }

    return rHead;
}


int main() {

    LL list1;
    list1.pushFront(4);
    list1.pushFront(2);
    list1.pushFront(1);

    print(list1.head);
    LL list2;
    list2.pushFront(4);
    list2.pushFront(3);
    list2.pushFront(1);
    print(list2.head);

    // Node* res = mergeLists(list1.head, list2.head);

    print(copyList(list1.head));

    return 0;
}