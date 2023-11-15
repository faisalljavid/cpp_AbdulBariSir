#include <iostream>
using namespace std;

class StackOverflow : exception
{
};
class StackUnderflow : exception
{
};

class Stack
{
private:
    int *stk;
    int top = -1;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }

    void push(int x)
    {
        if (top == size - 1)
            throw StackOverflow();
        top++;
        stk[top] = x;
    }

    int pop()
    {
        if (top == -1)
            throw StackUnderflow();
        return stk[top--];
    }
};

int main()
{
    try
    {
        Stack s(5);
        // s.push(2);
        // s.push(3);
        // s.push(4);
        // s.push(10);
        // s.push(9);
        // s.push(8); //? 6th one would cause Stack overflow
        s.pop(); //? Stack underflow
    }

    catch (const StackOverflow& e) //? can be written as: catch (StackOverflow e) as well but not recommended
    {
        cout << "Stack is full" << endl;
    }

    catch (const StackUnderflow& e)
    {
        cout << "Stack Underflow" << endl;
    }
    return 0;
}