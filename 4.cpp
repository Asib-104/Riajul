#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
private:
    int top;
    int a[SIZE];

public:
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    void printStack();
};

bool Stack::push(int x) {
    if (top >= (SIZE - 1)) {
        cout << "Can't push. Stack is full." << endl;
        return false;
    } else {
        a[++top] = x;
        cout << "Pushed item " << x << " into the stack." << endl;
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        cout << "Can't pop. Stack is empty." << endl;
        return 0;
    } else {
        int x = a[top--];
        cout << "Popped item " << x << " from the stack." << endl;
        return x;
    }
}

void Stack::printStack() {
    if (top < 0) {
        cout << "Stack is empty." << endl;
        return;
    } else {
        cout << "Here's the stack: ";
        for (int i = top; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
}

int main() {
    Stack s;
    s.push(5);
    s.push(4);
    s.push(6);
    s.push(3);
    s.printStack();
    s.push(7);
    s.push(8);
    s.printStack();
    s.pop();
    s.printStack();

    return 0;
}
