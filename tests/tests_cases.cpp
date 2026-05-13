#include <iostream>
using namespace std;

/* STACK TEST */

class Stack
{
    int arr[100];
    int top;

public:
    Stack() { top = -1; }

    void push(int x)
    {
        arr[++top] = x;
    }

    int pop()
    {
        return arr[top--];
    }
};

/* QUEUE TEST */

class Queue
{
    int arr[100];
    int front, rear;

public:
    Queue()
    {
        front = rear = -1;
    }

    void enqueue(int x)
    {
        if (front == -1)
            front = 0;
        arr[++rear] = x;
    }

    int dequeue()
    {
        return arr[front++];
    }
};

/* LINKED LIST TEST */

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

class LinkedList
{
public:
    Node *head = NULL;

    void insert(int val)
    {
        Node *n = new Node(val);

        if (!head)
        {
            head = n;
            return;
        }

        Node *temp = head;

        while (temp->next)
            temp = temp->next;

        temp->next = n;
    }

    void display()
    {
        Node *temp = head;

        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{

    cout << "STACK TEST\n";
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Expected: 20\n";
    cout << "Actual: " << s.pop() << endl;

    cout << "\nQUEUE TEST\n";
    Queue q;
    q.enqueue(100);
    q.enqueue(200);
    cout << "Expected: 100\n";
    cout << "Actual: " << q.dequeue() << endl;

    cout << "\nLINKED LIST TEST\n";
    LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);

    cout << "Expected: 1 2 3\n";
    cout << "Actual: ";
    l.display();

    return 0;
}