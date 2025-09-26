// write a program to reverse the nodes of a linked list k at a time and return its modified list
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
    Node* head ;
    Node* tail;

    List() {
        head = tail = NULL;

    }

    void InsertAtHead(int val) {
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
    };

    // function to reverse k nodes in the linked list
    Node* reverseKGroup(Node* head, int k) {
        Node* temp = head;
        int count = 0;
        // check if there are at least k nodes left in the linked list

        while(count < k) {
            if(temp == NULL) {
                return head; // not enough nodes, return the original head
            }

            temp = temp->next;
            count++;
        }

        // recursive call for rest LL
        Node* prevNode = reverseKGroup(temp , k);

        // reverse k nodes
        temp = head;
        count = 0;

        while(count < k) {
            Node* next = temp->next;
            temp->next = prevNode;

            prevNode = temp;
            temp = next;
            count++;
        }
        return prevNode; // new head of the reversed k-group
    }
};

int main() {
    List l1;
    l1.InsertAtHead(6);
    l1.InsertAtHead(5);
    l1.InsertAtHead(4);
    l1.InsertAtHead(3);     
    l1.InsertAtHead(2);
    l1.InsertAtHead(1);
    l1.display();
    cout<<endl;
    int k = 3;
    l1.head = l1.reverseKGroup(l1.head , 3);
    l1.display();

    return 0;
}