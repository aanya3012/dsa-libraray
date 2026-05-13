#include <iostream>
using namespace std;

class Stack
{
private:
    int arr[100];
    int top;

public:
    // Constructor
    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top == 99)
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed\n";
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }

        cout << arr[top--] << " popped\n";
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Top element: " << arr[top] << endl;
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.peek();
    s.pop();
    s.peek();

    return 0;
}