
// Implementation of Linked List 

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

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val) // O(1)
    {
        Node *newNode = new Node(val); // dyanmic

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
    }

    void push_back(int val) // O(1)
    {
        Node *newNode = new Node(val); // dyanmic

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void insert(int val, int pos) // O(n)
    {

        if (pos < 0)
        {
            cout << "invalid pos\n";
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "invalid pos\n";
                return;
            }
            temp = temp->next;
        }
        Node *newNode = new Node(val); // dyanmic
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void pop_front() // O(1)
    {

        if (head == NULL)
        {
            cout << "LL is empty\n";
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }
    void pop_back() // O(n) 
    {

        if (head == NULL)
        {
            cout << "LL is empty\n";
            return;
        }

        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;

        delete tail;
        tail = temp;
    }

    void printLL()  // O(n)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    int search(int key)  // O(n)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main()
{
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);

    ll.insert(4, 2);
    ll.printLL();
    cout<< ll.search(3);
    return 0;
}