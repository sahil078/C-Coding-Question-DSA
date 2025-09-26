// write the program to flatten a multilevel doubly linked list

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node* child;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
        child = NULL;
    }
};

class DoublyLL {
    public:
    Node* head;
    Node* tail;
    Node* child;

    public:
    DoublyLL() {
        head = tail = NULL;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if(head ==NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void printList() {
        Node* temp = head;

        while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // pop from head
    void pophead() {
        if(head == NULL) {
            cout<<"Doubly LL is empty" <<endl;
            return;
        }
        if(head->next == NULL) {
            delete head;
            head = tail = NULL;
            return;
        }
        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        if(head->next == tail) {
            delete head;
            head = tail;
            head->prev= NULL;
             return;
        }
        Node* temp = head;
        head = head->next;
        if(head != NULL) {
            head->prev= NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    // pop from tail
    void popTail() {
        if(head == NULL) {
            cout<<"Doublt LL is empty" <<endl;
            return;
        }
        if(head->next == NULL) {
            delete head;
            head = tail = NULL;
            return;
        }
        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        if(head->next == tail) {
            delete tail;
            tail = head;   
            tail->next = NULL;
            return;
        }
        Node* temp = tail;
        tail = temp->prev;  
        if(tail != NULL) {
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    Node* flatten(Node* head) {
        if(head == NULL) {
            return NULL;
        }

        Node* curr = head;
        Node* tail = head;

        // find the tail node of the main list
        while(tail->next != NULL) {
            tail = tail->next;
        }

        // traverse the list
        while(curr != NULL) {
            // if curr has a child
            if(curr->child != NULL) {
                // append the child at the end of the main list
                tail->next = curr->child;
                curr->child->prev = tail;

                // update the tail to the new last node
                Node* temp = curr->child;
                while(temp->next != NULL) {
                    temp = temp->next;
                }
                tail = temp;

                // remove the child pointer
                curr->child = NULL;
            }
            // move to the next node
            curr = curr->next;
        }
        return head;
    }
};

int main() {
    DoublyLL dl;
    dl.insertAtTail(1);
    dl.insertAtTail(2);
    dl.insertAtTail(3);
    dl.insertAtTail(4);
    dl.insertAtTail(5);
    dl.insertAtTail(6);

    dl.printList();

    dl.pophead();
    dl.printList();

    dl.popTail();
    
    dl.printList();
    dl.flatten(dl.head);
    dl.printList();

    return 0;
}