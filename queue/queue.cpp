#include <iostream>
using namespace std;

class Queue
{
private:
    int arr[100];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if (rear == 99)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        arr[++rear] = value;
        cout << value << " enqueued" << endl;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << arr[front++] << " dequeued" << endl;
    }

    void peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }

    bool isEmpty()
    {
        return front == -1 || front > rear;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);

    q.peek();

    q.dequeue();

    q.peek();

    return 0;
}