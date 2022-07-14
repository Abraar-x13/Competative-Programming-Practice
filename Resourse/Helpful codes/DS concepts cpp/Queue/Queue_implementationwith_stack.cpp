// SEE : https://www.studytonight.com/data-structures/queue-using-stack

#include <iostream>
using namespace std;

class Stack
{
    int top;
    public:
    int a[100];
    Stack() { top = -1; }

    void push(int x);
    int pop();
    bool isEmpty();
};

void Stack::push(int x)
{
    if(top >= 100) { cout << "Stack Overflow \n"; }
    else
    {
        a[++top] = x;
        cout << "Element Inserted into Stack\n";
    }
}

int Stack::pop()
{
    if(top < 0) { cout << "Stack Underflow \n"; return 0; }
    else
    {
        int d = a[top--];
        return d;
    }
}

bool Stack::isEmpty()
{
    if(top < 0) { return true; }
    else { return false; }
}


class Queue
{
    public:
    Stack S1, S2;


    void enqueue(int x);
    int dequeue();
};

void Queue :: enqueue(int x)
{
    S1.push(x);
    cout << "Element Inserted into Queue\n";
}

int Queue :: dequeue()
{
    int x, y;
    while(!S1.isEmpty())
    {
        // take an element out of first stack
        x = S1.pop();
        // insert it into the second stack
        S2.push(x);
    }

    // removing the element
    y = S2.pop();

    // moving back the elements to the first stack
    while(!S2.isEmpty())
    {
        x = S2.pop();
        S1.push(x);
    }

    return y;
}


int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(100);
    q.enqueue(1000);
    cout << "Removing element from queue" << q.dequeue();

    return 0;
}
