// write a program to search an element in a linked list
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;
    public:
    List() {
        head = NULL;
        tail = NULL;    
    }

    // Insert the data from the front of the linked list
    void pushFront(int val) {
        Node *newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
            return;
        }
    }

    // Display the linked list
    void display() {
        Node* temp =  head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    }


    // search for a value in the linked list
    bool search(int key) {
        Node* temp = head;
        int idx = 0;

        while(temp != NULL) {
            if(temp->data == key) {
                cout << "\n Value found at index: " << idx << endl;
                return true;
            }else {
                temp = temp->next;
                idx++;
            }
        }
        cout << "Value not found in the list" << endl;
        return false;
    }
};

int main() {
    List list;
    list.pushFront(10);
    list.pushFront(20);
    list.pushFront(30);
    list.pushFront(40);
    list.display();

    list.search(20);

    return 0;
}

