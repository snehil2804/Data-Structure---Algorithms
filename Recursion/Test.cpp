#include <iostream>
using namespace std;
void fun (int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fun (n-1);
    }
}
void fun2 (int x)
{
    if (x > 0)
    {
        
        fun2 (x-1);
        cout << x << endl;
    }
}


int main()
{
    fun(5);
    cout << "See the difference" << endl;
    fun2(5);
 
    return 0;
}