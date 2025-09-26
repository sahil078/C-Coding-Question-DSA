// write the cpp program to merge two sorted linked list

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

class List {
    public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void insertAthead(int val) {
        Node* newNode = new Node (val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while(temp != NULL ) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    Node* mergeTwoSortedLL(Node* head1 , Node* head2) {
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;

        if(head1->data <= head2->data) {
            head1->next = mergeTwoSortedLL(head1->next , head2);
            return head1;
        }else {
            head2->next = mergeTwoSortedLL(head1, head2->next);
            return head2;
        }
    }
};


int main() {
    List l1;
    l1.insertAthead(5);
    l1.insertAthead(3);
    l1.insertAthead(1);

    l1.display();
    List l2;
    l2.insertAthead(6);
    l2.insertAthead(4);
    l2.insertAthead(2);

    l2.display();


    Node* mergedHead = l1.mergeTwoSortedLL(l1.head, l2.head);
    Node* temp = mergedHead;
    cout<<"Merged Linked List: " <<endl;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}