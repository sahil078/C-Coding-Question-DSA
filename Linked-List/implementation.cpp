// Cpp Inplementation and Definition of Singly Linked List
#include <iostream>
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
    Node *head;
    Node *tail;

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
        }else {
            newNode->next = head;
            head = newNode;
            return;
        }
    }

    // Insert the data from the back of the linked list
    void pushBack(int val) {
        Node *newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }else {
            tail->next = newNode;
            tail = newNode;
            return;
        }
    }

    // Remove the data from the front of the linked list
    void popFront() {
        if(head == NULL) {
            cout<< "List is empty" << endl;
            return;
        }else{
            Node *temp = head;
            head = head->next;
            temp->next = NULL;

            delete temp;
            return;
        }
    }

    // Remove the data from the back of the linked list
    void popBack() {
        if(head == NULL) {
            cout<<"List is empty" << endl;
            return;
        }

        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // Display the linked list
    void display() {
        Node *temp = head;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Insert the data at a given position
    void insertAtPosition(int val, int pos) {
        if(pos < 0 ) {
            cout << "Invalid Position" << endl;
            return;
        }
        if(pos == 0) {
            pushFront(val);
            return;
        }

        Node *temp = head;

        for(int i=0; i<pos - 1; i++) {
            if(temp == NULL) {
                cout << "Position out of bounds" << endl;
                return;
            }
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Search for a value in the linked list
    bool search(int key) {
        Node *temp = head;
        int indx = 0;
        while(temp != NULL) {
            if(temp->data == key) {
                cout << "Value found at index: " << indx << endl;
                return true;
            }
            temp = temp->next;
            indx++;
        }
        cout << "Value not found" << endl;
        return false;
    }
};

int main() {
    List list;
    list.pushBack(1);
    list.pushBack(2);
    list.pushBack(3);
    list.pushFront(0);

    list.display();

    list.insertAtPosition(4 , 4);

    list.display();

    list.search(4);

    return 0;
}