// write the cpp program to remove the cycle in the Linked  list and also find the starting node of the cycle

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

    linkedList () {
        head = NULL;
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
    }

    void display() {
        Node* temp = head;
        int count  = 0;

        while(temp != NULL && count < 10) {
            cout<<temp->data<< "->";
            temp = temp->next;
            count++;

        }
        if(temp != NULL) {
            cout<<"... (cycle detected, stopping display)"<<endl;
        }
    }

    Node* detectCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        bool isCycle = false; // to check if cycle is present or not

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                isCycle = true;
                break;
            }
        }

        if(!isCycle) {
            return  NULL; // no cycle
        }

        // find the starting node of the cycle
        slow = head;
        Node* prev = NULL; // to keep track of the node before the meeting point

        while(slow != fast) {
            slow = slow->next;
            prev = fast; // update prev to the current fast node
            fast = fast->next;
        }
        // remove the cycle
        if(prev != NULL) {
            prev->next = NULL; // breaking the cycle    
        }
        return slow; // starting node of the cycle

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

    // creating a cycle for testing
    Node* temp = ll.head;
    Node* startNode = NULL; // node where the cycle starts
    int pos = 2; // position to create the cycle (0-indexed)
    int count = 0;

    while(temp != NULL) {
        if(count == pos) {
            startNode = temp;
        }
        if(temp->next == NULL) {
            ll.tail = temp; // update tail to the last node
        }
        temp = temp->next;
        count++;
    }

    if(ll.tail != NULL && startNode != NULL) {
        ll.tail->next = startNode; // creating the cycle
    }

    ll.display();
    cout<<endl;

    Node* cycleStartNode = ll.detectCycle(ll.head);
    if(cycleStartNode != NULL) {
        cout<<"Cycle detected at node with value: "<<cycleStartNode->data<<endl;
    } else {
        cout<<"No cycle detected"<<endl;
    }

    cout<<"Linked List after removing cycle: ";
    ll.display();
    cout<<endl;

    return 0;
}