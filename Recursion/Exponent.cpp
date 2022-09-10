#include <iostream>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

//method 2-this one is quicker than the first one
int power2(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power2(x * x, n / 2);
    else
        return x * power2(x * x, (n - 1) / 2);
}

int main()
{
    int x, n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The value of " << x << " raised to the power " << n << " is " << power(x, n) << endl;
     cout << "The value of " << x << " raised to the power " << n << " is " << power2(x, n) << endl;
    return 0;


}
