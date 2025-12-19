#include <iostream>
using namespace std;

int main()
{
    int x = 3, y = 4;

    // cin >> x >> y;

    x += y; // x=x+y
    cout << "x=" << x << endl;

    x -= y; // x=x-y
    cout << "x=" << x << endl;

    x *= y; // x=x*y
    cout << "x=" << x << endl;

    x %= y; // x=x%y
    cout << "x=" << x;

    return 0;
}