// write a program to reverse the linkedlist

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List() {
        head = NULL;
        tail = NULL;
    }

    // Insert the data from the back of the linked list
    void pushFront(int val) {
        Node * newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;

        }else{
            newNode->next = head;
            head = newNode;
            return;
        }
    }

    void display() {
        Node* temp = head;

        while(temp != NULL) {
            cout<< temp->data << " -> ";
            temp = temp->next;

        }
    }

    // reverse the linked list
    Node* reverse() {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};


int main() {
    List l;
    l.pushFront(1);
    l.pushFront(2);
    l.pushFront(3);
    l.pushFront(4);
    l.pushFront(5);

    cout << "Original Linked List: ";
    l.display();

    Node* newHead = l.reverse();
    cout << "\nReversed Linked List: ";
    while(newHead != NULL) {
        cout << newHead->data << " -> ";
        newHead = newHead->next;
    }
    cout << "NULL" << endl;

    return 0;
}