#include <iostream>
using namespace std;

// 1) Tail recursion - If recursive fucntion is calling itself and that recursive function is the last statement in the function then it is called as tail recursion. In tail recursion, the recursive call is the last statement in the function

void tail(int n)
{
    if (n > 0)
    {

        cout << n << endl;
        tail(n - 1);
    }
}

// 2) Head recursion - If recursive fucntion is calling itself and that recursive function is the first statement in the function then it is called as head recursion. In head recursion, the recursive call is the first statement in the function

void head(int n)
{
    if (n > 0)
    {
        head(n - 1);
        cout << n << endl;
    }
}
// 3) Tree recursion - If recursive fucntion is calling itself more than once then it is called as tree recursion. In tree recursion, the recursive call is the first statement in the function

void tree(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        tree(n - 1);
        tree(n - 1);
    }
}
// 4) Indirect recursion - If recursive fucntion is calling another function which is also calling the same function then it is called as indirect recursion. In indirect recursion, the recursive call is the first statement in the function. There can be more than one function calling themselves in a circular manner.

void indirect(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        indirect2(n - 1);
    }
}
void indirect2(int x)
{
    if (x > 0)
    {
        cout << x << endl;
        indirect(x / 2);
    }
}

// 5) Nested recursion - If recursive fucntion is calling itself and that recursive function is also calling the same function then it is called as nested recursion. In nested recursion, the recursive call is the first statement in the function

int nested(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {

        return nested(nested(n + 11));
    }
}

int main()
{
    cout << "Tail Recursion" << endl;
    tail(5);

    cout << "Head Recursion" << endl;

    head(5);

    cout << "Tree Recursion" << endl;

    tree(3);

    cout << "Indirect Recursion" << endl;

    indirect(20);

    cout << "Nested Recursion" << endl;

    cout << nested(95);

    return 0;
}