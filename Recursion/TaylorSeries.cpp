#include <iostream>
using namespace std;

int e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    else
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}
// using loop
int e2(int x, int n)
{
    double s = 1;
    double num = 1;
    double den = 1;
    for (int i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
}
// using Horner's rule ( recursion)
int e3(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e3(x, n - 1);
}

int main()
{
    cout << e(4, 15);
    // cout << e2(4, 15);
    // cout << e3(4, 15);
    return 0;
}
