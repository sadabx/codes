#include <iostream>
using namespace std;

int main()
{
    int x = 5, y;
    y = x++;
    cout << x << endl
         << y;
    return 0;
}