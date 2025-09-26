// write the program to copy a linked list with random pointer

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* random;

    Node(int val) {
        data = val;
        next = NULL;
        random = NULL;
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


    void insertAtHead(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        }else {
            newNode->next = head;
            head = newNode;
        }

    }

    void display() {
        Node* temp = head;

        while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

  Node* copyRandomList(Node* head) {
    // Base case if LL is empty
    if(head == NULL) {
        return NULL;
    }
    // unordered map to store the mapping of original node to copied node
    unordered_map<Node* , Node*> m;

    Node* newHead = new Node(head->data);
    Node* oldTemp = head->next;
    Node* newTemp = newHead;

    m[head] = newHead;

    // creating the copy of the linked list without random pointer
    while(oldTemp != NULL) {
        Node* copyNode = new Node(oldTemp->data);
        m[oldTemp] = copyNode;
        newTemp->next = copyNode;
        oldTemp = oldTemp->next;
        newTemp = newTemp->next;
    }

    oldTemp = head;
    newTemp = newHead;

    while(oldTemp != NULL) {
        newTemp->random = m[oldTemp->random];

        oldTemp = oldTemp->next;
        newTemp = newTemp->next;
    }
    return newHead;
  }  
};


int main() {
    List l1;
    l1.insertAtHead(5);
    l1.insertAtHead(10);
    l1.insertAtHead(15);
    l1.insertAtHead(20);
    l1.insertAtHead(25);

    cout<<"Original Linked List: ";

    l1.display();

    cout<<endl;

    cout<<"Copied Linked List: ";
    l1.head = l1.copyRandomList(l1.head);
    l1.display();


    return 0;

}