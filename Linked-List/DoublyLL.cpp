// Doubly LL implementation

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLL {
    public:
    Node* head;
    Node* tail;

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
    void pophead () {
        if(head == NULL) {
            cout<<"Doubly LL is empty"<<endl;
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
        Node* temp = tail;
        tail = temp->prev;

        if(tail != NULL) {
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    void reverse ()  {
        Node* curr = head;
        Node* prev= NULL;
        Node* next = NULL;

        tail = head;
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            curr->prev = next;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main() {
    DoublyLL dl;
    dl.insertAtHead(1);
    dl.insertAtHead(2);
    dl.insertAtHead(3);
    dl.insertAtHead(4);
    dl.insertAtHead(5);
    dl.printList();
    dl.insertAtTail(0);
    dl.printList();
    dl.pophead();
    dl.printList();
    dl.popTail();
    dl.printList();
    dl.reverse();
    dl.printList(); 
    
    return 0;
}