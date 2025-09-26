// write the program to detect the cycle in the Linked  list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class linkedList
{
public:
    Node *head;
    Node *tail;

    linkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    };

    void display()
    {
        Node *temp = head;
        int count = 0;

        while (temp != NULL && count < 10)
        { // limiting to 20 nodes to avoid infinite loop in case of cycle
            cout << temp->data << " -> ";
            temp = temp->next;
            count++;
        }
        if (temp != NULL)
        {
            cout << "... (cycle detected, stopping display)" << endl;
        }
        else
        {
            cout << "NULL" << endl;
        }
    };

    // function to detect cycle in the linked list
    bool detectCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }

    // Function to make cycle in the linked list
    void makeCycle(int pos)
    {
        Node *temp = head;
        Node *startNode;

        int count = 1;

        while (temp != NULL)
        {
            if (count == pos)
            {
                startNode = temp;
            }
            if (temp->next == NULL)
            {
                tail = temp;
                break;
            }

            temp = temp->next;
            count++;
        }
        if (startNode != NULL && tail != NULL)
        {
            tail->next = startNode; // Creating the cycle
        };
    }
};

int main()
{
    linkedList ll;

    ll.insertAtHead(1);
    ll.insertAtHead(2);
    ll.insertAtHead(3);
    ll.insertAtHead(4);
    ll.insertAtHead(5);

    ll.makeCycle(3);

    ll.display();

    if (ll.detectCycle(ll.head))
    {
        cout << "Cycle is present in the linked list" << endl;
    }
    else
    {
        cout << "Cycle is not present in the linked list" << endl;
    }

    ll.display();

    return 0;
}