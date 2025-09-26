// wrtie the program to find the middle of the linked list

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

class linkedList {
    public:
    Node* head;
    Node* tail;
    

    linkedList() {
        head  = NULL;
        tail = NULL;
    }


    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    };

    Node* middleNode(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    void display() {
        Node* temp = head;

        while(temp != NULL) {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
    }

};

int main() {
    linkedList ll;

    ll.insertAtHead(5);
    ll.insertAtHead(4);
    ll.insertAtHead(3);
    ll.insertAtHead(2);
    ll.insertAtHead(1);
    ll.insertAtHead(0);
    ll.insertAtHead(-1);

    ll.display();
    cout<<endl;

    Node* middle = ll.middleNode(ll.head);
    cout<<"Middle Node: "<<middle->data<<endl;

    return 0;
}